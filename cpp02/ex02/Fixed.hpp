/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 09:52:31 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/01/04 20:38:42 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
class Fixed
{
private:
    int i;
    static const int j;

public:
    Fixed();
    Fixed(const int k);
    Fixed(const float fl);
    Fixed(const Fixed &obj);
    Fixed &operator=(const Fixed &obj);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    bool operator>(Fixed const &obj) const;
    bool operator<(Fixed const &obj) const;
    bool operator>=(Fixed const &obj) const;
    bool operator<=(Fixed const &obj) const;
    bool operator==(Fixed const &obj) const;
    bool operator!=(Fixed const &obj) const;

    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;

    Fixed operator++(int);
    Fixed &operator++();
    Fixed operator--(int);
    Fixed &operator--();

    static Fixed &max(Fixed &x, Fixed &y);
    static const Fixed &min(Fixed const &x, Fixed const &y);
    static Fixed &min(Fixed &x, Fixed &y);
    static const Fixed &max(Fixed const &x, Fixed const &y);
};

std::ostream &operator<<(std::ostream &os, const Fixed &value);

#endif
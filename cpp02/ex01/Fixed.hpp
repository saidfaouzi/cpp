/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 09:52:31 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/01/03 12:52:08 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
};

std::ostream& operator<<(std::ostream& os, const Fixed& value) ;
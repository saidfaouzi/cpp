/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 09:52:41 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/01/04 20:38:35 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::j = 8;

Fixed::Fixed()
{
    i = 0;
}
Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    this->i = obj.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
    return (i);
}

void Fixed::setRawBits(int const raw)
{
    i = raw;
}

Fixed::Fixed(const int k)
{
    i = k << j;
}

Fixed::Fixed(const float fl)
{
    i = roundf(fl * (1 << j));
}

float Fixed::toFloat(void) const
{
    return ((float)i / (1 << j));
}

int Fixed::toInt(void) const
{
    return (i * (1 >> j));
}

std::ostream &operator<<(std::ostream &os, const Fixed &value)
{
    os << value.toFloat();
    return os;
}

bool Fixed::operator>(Fixed const &obj) const
{
    return (i > obj.i);
}
bool Fixed::operator<(Fixed const &obj) const
{
    return (i < obj.i);
}
bool Fixed::operator>=(Fixed const &obj) const
{
    return (i >= obj.i);
}
bool Fixed::operator<=(Fixed const &obj) const
{
    return (i <= obj.i);
}
bool Fixed::operator==(Fixed const &obj) const
{
    return (i == obj.i);
}
bool Fixed::operator!=(Fixed const &obj) const
{
    return (i != obj.i);
}

Fixed Fixed::operator+(const Fixed &obj) const
{
    Fixed tmp;
    tmp.i = i + obj.i;
    return (tmp);
}

Fixed Fixed::operator-(const Fixed &obj) const
{
    Fixed tmp;
    tmp.i = i - obj.i;
    return (tmp);
}

Fixed Fixed::operator*(const Fixed &obj) const
{
    Fixed tmp;
    tmp.i = i * obj.i / (1 << j);
    return (tmp);
}

Fixed Fixed::operator/(const Fixed &obj) const
{
    Fixed tmp;
    tmp.i = ((1 << j) * i) / obj.i;
    return (tmp);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp;

    tmp.i = i;
    i = i + 1;
    return (tmp);
}
Fixed &Fixed::operator++()
{
    i = i + 1;
    return (*this);
}
Fixed Fixed::operator--(int)
{
    Fixed tmp;

    tmp.i = i;
    i = i - 1;
    return (tmp);
}
Fixed &Fixed::operator--()
{
    i = i - 1;
    return (*this);
}

Fixed &Fixed::min(Fixed &x, Fixed &y)
{
    if (x < y)
        return (x);
    return (y);
}
const Fixed &Fixed::min(Fixed const &x, Fixed const &y)
{
    if (x < y)
        return (x);
    return (y);
}
Fixed &Fixed::max(Fixed &x, Fixed &y)
{
    if (x > y)
        return (x);
    return (y);
}
const Fixed &Fixed::max(Fixed const &x, Fixed const &y)
{
    if (x > y)
        return (x);
    return (y);
}
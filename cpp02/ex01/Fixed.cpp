/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 09:52:41 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/01/03 13:00:03 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::j = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    i = 0;
}
Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->i = obj.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (i);
}

void Fixed::setRawBits( int const raw )
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

float Fixed::toFloat( void ) const
{
    return ((float)i / (1 << j));
}

int Fixed::toInt( void ) const
{
    return (i / (1 << j));
}


std::ostream& operator<<(std::ostream& os, const Fixed& value)
{
    os<< value.toFloat();
    return os;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:45:41 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/01/08 16:49:52 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat default constructor !" << std::endl;
}
WrongCat::WrongCat(WrongCat &obj):WrongAnimal(obj)
{
    std::cout << "WrongCat copy constructor !" << std::endl;
    *this = obj;
}
WrongCat &WrongCat::operator=(WrongCat &obj)
{
    std::cout << "WrongCat copy assignment constructor !" << std::endl;
    this->type = obj.type;
    return (*this);
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor !" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound :!" << std::endl;
}

std::string WrongCat::getType() const
{
    return (this->type);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:04:07 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/01/08 16:26:57 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat default constructor !" << std::endl;
}
Cat::Cat(Cat &obj):Animal(obj)
{
    std::cout << "Cat copy constructor !" << std::endl;
    *this = obj;
}
Cat &Cat::operator=(Cat &obj)
{
    std::cout << "Cat copy assignment constructor !" << std::endl;
    this->type = obj.type;
    return (*this);
}
Cat::~Cat()
{
    std::cout << "Cat destructor !" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat sound :!" << std::endl;
}

std::string Cat::getType() const
{
    return (this->type);
}
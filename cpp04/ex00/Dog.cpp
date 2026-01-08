/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:56:09 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/01/08 16:27:15 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog default constructor !" << std::endl;
}
Dog::Dog(Dog &obj):Animal(obj)
{
    std::cout << "Dog copy constructor !" << std::endl;
    *this = obj;
}
Dog &Dog::operator=(Dog &obj)
{
    std::cout << "Dog copy assignment constructor !" << std::endl;
    this->type = obj.type;
    return (*this);
}
Dog::~Dog()
{
    std::cout << "Dog destructor !" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound :!" << std::endl;
}

std::string Dog::getType() const
{
    return (this->type);
}
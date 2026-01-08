/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:45:36 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/01/08 16:47:47 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal Default constructor!" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal &obj)
{
    std::cout << "WrongAnimal copy constructor !" << std::endl;
    *this = obj;
}
WrongAnimal &WrongAnimal::operator=(WrongAnimal &obj)
{
    std::cout << "WrongAnimal copy assignment constructor !" << std::endl;
    this->type = obj.type;
    return (*this);
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal desctructor !" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound :!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}
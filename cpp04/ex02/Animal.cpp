/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:27:47 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/01/08 17:36:37 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal Default constructor!" << std::endl;
}
Animal::Animal(Animal &obj)
{
    std::cout << "Animal copy constructor !" << std::endl;
    *this = obj;
}
Animal &Animal::operator=(Animal &obj)
{
    std::cout << "Animal copy assignment constructor !" << std::endl;
    this->type = obj.type;
    return (*this);
}
Animal::~Animal()
{
    std::cout << "Animal desctructor !" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}
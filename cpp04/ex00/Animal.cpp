/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:27:47 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/01/08 15:35:14 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default constructor!" << std::endl;
}
Animal::Animal(Animal &obj)
{
    std::cout << "Animal copy constructor !" << std::endl;
    *this = obj;
}
Animal &Animal::operator=(Animal &obj)
{
    std::cout << "Animal copy assignement constructor !" << std::endl;
    this->type = obj.type;
}
Animal::~Animal()
{
    std::cout << "Animal desctructor !" << std::endl;
}
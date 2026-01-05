/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 23:24:34 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/01/05 23:29:10 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    hitpoint = 100;
    energypoints = 100;
    damage = 30;
    std::cout << "Default constructor" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    hitpoint = 100;
    energypoints = 100;
    damage = 30;
    std::cout << "Parametrized constructor" << std::endl;
}
FragTrap::FragTrap(FragTrap &obj) : ClapTrap(obj)
{
    std::cout << "copy constructor" << std::endl;
}
FragTrap &FragTrap::operator=(FragTrap &obj)
{
    if(this != &obj)
    {
        ClapTrap::operator=(obj);
    }
    std::cout << "copy assignement constructor" << std::endl;
    return (*this);
}
FragTrap::~FragTrap()
{
    std::cout << "Destructor" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Fragtrap requests a High five" << std::endl;
}
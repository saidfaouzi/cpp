/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 23:04:40 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/01/06 15:00:35 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    hitpoint = 100;
    energypoints = 50;
    damage = 20;
    std::cout << "Default constructor" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hitpoint = 100;
    energypoints = 50;
    damage = 20;
    std::cout << "Parametrized constructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &obj) : ClapTrap(obj)
{
    std::cout << "copy constructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &obj)
{
    if(this != &obj)
    {
        ClapTrap::operator=(obj);
    }
    std::cout << "copy assignement constructor" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (!hitpoint || !energypoints)
    {
        std::cout << "can't attack" << std::endl;
        return;
    }
    energypoints--;
    std::cout << "ScavTrap " << name << "attacks " << target << " , causing " << damage << " points of damage!" << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
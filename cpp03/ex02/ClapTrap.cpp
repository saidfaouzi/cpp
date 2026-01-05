/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 22:48:38 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/01/05 22:48:39 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): hitpoint(10), energypoints(10), damage(0)
{
    std::cout << "Default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name), hitpoint(10), energypoints(10), damage(0)
{
    std::cout << "Parametrized constructor" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap &obj):name(obj.name), hitpoint(obj.hitpoint), energypoints(obj.energypoints), damage(obj.damage) 
{
    std::cout << "copy constructor" << std::endl;
}
ClapTrap &ClapTrap::operator=(ClapTrap &obj)
{
    if (this != &obj)
    {
        name = obj.name;
        hitpoint = obj.hitpoint;
        energypoints = obj.energypoints;
        damage = obj.damage;
    }
    std::cout << "copy assignement constructor" << std::endl;
    return *this;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (!hitpoint || !energypoints)
    {
        std::cout << "can't attack" << std::endl;
        return;
    }
    energypoints--;
    std::cout << "ClapTrap " << name << "attacks " << target << " , causing " << damage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (!hitpoint)
    {
        std::cout << "already dead" << std::endl;
        return ;
    }
    hitpoint -= amount;
    if (hitpoint < 0)
        hitpoint = 0;
    std::cout << "ClapTrap " << name << "receive " << amount  << " points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (!hitpoint || !energypoints)
    {
        std::cout << "can't be repaired" << std::endl;
        return;
    }
    energypoints--;
    hitpoint+=amount;
    std::cout << "ClapTrap " << name << "repaired for " << amount  << " points of hit point!" << std::endl;
}
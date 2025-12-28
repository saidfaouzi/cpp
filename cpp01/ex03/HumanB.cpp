/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 12:42:50 by sfaouzi           #+#    #+#             */
/*   Updated: 2025/12/28 19:01:50 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << name << "attacks with their" << ob.getType() << "\n";
}

HumanB::HumanB()
{
    
}

HumanB::HumanB(std::string new_name)
{
    name = new_name;
}

void HumanB::setWeapon(Weapon new_ob)
{
    ob = new_ob;
}
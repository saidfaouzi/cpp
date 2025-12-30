/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 12:42:50 by sfaouzi           #+#    #+#             */
/*   Updated: 2025/12/29 11:28:30 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    if(!ob)
        return ;
    std::cout << name << " attacks with their " << ob->getType() << "\n";
}

HumanB::HumanB(std::string new_name)
{
    ob = NULL;
    name = new_name;
}

void HumanB::setWeapon(Weapon &new_ob)
{
    ob = &new_ob;
}
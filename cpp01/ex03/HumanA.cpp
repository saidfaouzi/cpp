/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 12:41:57 by sfaouzi           #+#    #+#             */
/*   Updated: 2025/12/29 09:57:51 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << name << " attacks with their " << ob.getType() << "\n";
}

HumanA::HumanA(std::string new_name, Weapon& new_ob): ob(new_ob)
{
    name = new_name;
}
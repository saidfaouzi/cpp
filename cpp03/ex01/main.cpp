/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 22:45:38 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/01/05 23:32:42 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

int main()
{
    ScavTrap x;
    x.attack("said");
    x.takeDamage(9);
    x.beRepaired(200);
    x.attack("said");
    x.guardGate();
}
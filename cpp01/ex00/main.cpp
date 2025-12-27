/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 18:44:10 by sfaouzi           #+#    #+#             */
/*   Updated: 2025/12/27 21:03:46 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie ob("foo");

    ob.announce();

    Zombie *zombie = newZombie("said");
    zombie->announce();

    randomChump("faouzi");
    
}

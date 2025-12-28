/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 12:35:31 by sfaouzi           #+#    #+#             */
/*   Updated: 2025/12/28 19:28:54 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club;
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("siiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiif");
        bob.attack();
    }
    // {
    //     Weapon club = Weapon();
    //     HumanB jim("Jim");
    //     jim.setWeapon(club);
    //     jim.attack();
    //     club.setType("some other type of club");
    //     jim.attack();
    // }
    return 0;
}
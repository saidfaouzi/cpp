/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 10:58:40 by sfaouzi           #+#    #+#             */
/*   Updated: 2025/12/28 11:11:37 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    
    if(N <= 0)
        return (NULL);
    Zombie *horde = new Zombie[N];
    while(i < N)
    {
        horde[i].Setname(name);
        i++;
    }
    return (horde);
}
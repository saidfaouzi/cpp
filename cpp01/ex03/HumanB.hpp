/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 12:42:31 by sfaouzi           #+#    #+#             */
/*   Updated: 2025/12/28 18:59:39 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
class HumanB
{
    private:
        Weapon ob;
        std::string name;
    public:
        HumanB();
        HumanB(std::string new_name);
        void setWeapon(Weapon new_ob);
        void attack();
};
#endif
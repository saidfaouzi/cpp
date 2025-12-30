/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 12:42:31 by sfaouzi           #+#    #+#             */
/*   Updated: 2025/12/29 11:28:49 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
class HumanB
{
    private:
        std::string name;
        Weapon *ob;
    public:
        HumanB(std::string new_name);
        void setWeapon(Weapon &new_ob);
        void attack();
};
#endif
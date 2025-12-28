/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 12:41:11 by sfaouzi           #+#    #+#             */
/*   Updated: 2025/12/28 19:28:05 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP
#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon &ob;
        std::string name;
    public:
        HumanA(std::string name, Weapon &new_ob);
        void attack();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:17:36 by sfaouzi           #+#    #+#             */
/*   Updated: 2025/12/29 17:44:02 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main()
{
    Harl obj;
    obj.complain("DEBUG");
    obj.complain("INFO");
    obj.complain("WARNING");
    obj.complain("ERROR");
}
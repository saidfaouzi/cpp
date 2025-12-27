/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 18:02:17 by sfaouzi           #+#    #+#             */
/*   Updated: 2025/12/25 17:02:10 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    int i = 0;
    std::string input;
    PhoneBook phonebook;

    phonebook.set_t_n();
    while (1)
    {
        std::cout << "Enter cmd (ADD, SEARCH or EXIT) : ";
        std::getline(std::cin, input);
        if (std::cin.fail())
            break ;
        if (input == "ADD")
        {
            if(phonebook.ADD(i++))
                break ;
        }
        if(input == "SEARCH")
        {
            if(phonebook.SEARCH())
                break ;
        }
        if (input == "EXIT")
            break;
    }
}

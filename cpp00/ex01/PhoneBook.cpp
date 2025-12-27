/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:50:19 by sfaouzi           #+#    #+#             */
/*   Updated: 2025/12/25 16:45:17 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::set_t_n()
{
    total_numbers = 0;
}

void PhoneBook::display_contact(int i)
{
    if(i >= total_numbers)
    {
        std::cout << "this index not found ;)\n";
        return;
    }
    std::cout << "first name : " << contacts[i].getter("first_name") << "\n";
    std::cout << "last name : " << contacts[i].getter("last_name") << "\n";
    std::cout << "nickname : " << contacts[i].getter("nickname") << "\n";
    std::cout << "phone number : " << contacts[i].getter("phone_number") << "\n";
    std::cout << "darkest secret : " << contacts[i].getter("darkest_secret") << "\n";
}

std::string formatField(const std::string str)
{
    std::string val;
    if (str.length() > 10)
    {
        val = str.substr(0, 9);
        val += '.';
    }
    else
        val = str;
    return val;
}

// int PhoneBook::ADD(int i)
// {
//     std::string input;
//     std::cout << "first name : ";
//     std::getline(std::cin, input);
//     if (std::cin.fail())
//         return (1);
//     contacts[i % 8].setter("first_name", input);

//     std::cout << "last name : ";
//     std::getline(std::cin, input);
//     if (std::cin.fail())
//         return (1);
//     contacts[i % 8].setter("last_name", input);

//     std::cout << "nickname : ";
//     std::getline(std::cin, input);
//     if (std::cin.fail())
//         return (1);
//     contacts[i % 8].setter("nickname", input);

//     std::cout << "phone number : ";
//     std::getline(std::cin, input);
//     if (std::cin.fail())
//         return (1);
//     contacts[i % 8].setter("phone_number", input);

//     std::cout << "darkest secret : ";
//     std::getline(std::cin, input);
//     if (std::cin.fail())
//         return (1);
//     contacts[i % 8].setter("darkest_secret", input);

//     if (total_numbers < 8)
//         total_numbers++;
//     return (0);
// }

int PhoneBook::ADD(int i)
{
    std::string input;

    do {
        std::cout << "first name : ";
        std::getline(std::cin, input);
        if (std::cin.fail())
            return (1);
    } while (input.empty());
    contacts[i % 8].setter("first_name", input);

    do {
        std::cout << "last name : ";
        std::getline(std::cin, input);
        if (std::cin.fail())
            return (1);
    } while (input.empty());
    contacts[i % 8].setter("last_name", input);

    do {
        std::cout << "nickname : ";
        std::getline(std::cin, input);
        if (std::cin.fail())
            return (1);
    } while (input.empty());
    contacts[i % 8].setter("nickname", input);

    do {
        std::cout << "phone number : ";
        std::getline(std::cin, input);
        if (std::cin.fail())
            return (1);
    } while (input.empty());
    contacts[i % 8].setter("phone_number", input);

    do {
        std::cout << "darkest secret : ";
        std::getline(std::cin, input);
        if (std::cin.fail())
            return (1);
    } while (input.empty());
    contacts[i % 8].setter("darkest_secret", input);

    if (total_numbers < 8)
        total_numbers++;
    return (0);
}


int PhoneBook::SEARCH()
{
    int i = 0;
    std::string index;
    if (total_numbers == 0)
    {
        std::cout << "empty phonebook \n";
        return (0);
    }
    std::cout << "     Index|First Name| Last Name|  Nickname\n";
    while (i < total_numbers)
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << formatField(contacts[i].getter("first_name")) << "|"
                  << std::setw(10) << formatField(contacts[i].getter("last_name")) << "|"
                  << std::setw(10) << formatField(contacts[i].getter("nickname"))
                  << std::endl;
        i++;
    }
    std::cout << "chose id to find your contact info : ";
    std::getline(std::cin, index);
    if(std::cin.fail())
        return (1);
    if(index.empty())
        return (0);
    if (index.size() == 1 && index[0] >= '0' && index[0] <= '7')
            display_contact(index[0] - '0');
    else
        std::cout << "wrong index\n";
    
    return (0);
}

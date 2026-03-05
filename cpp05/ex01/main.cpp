/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:21:20 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/03/05 23:03:06 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    std::cout << "----- Test 1: Successful signing -----" << std::endl;
    try
    {
        Bureaucrat a("Alice", 40);
        Form f("Contract", 50, 20);

        std::cout << a << std::endl;
        std::cout << f << std::endl;

        a.signForm(f);

        std::cout << f << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n----- Test 2: Grade too low to sign -----" << std::endl;
    try
    {
        Bureaucrat b("Bob", 120);
        Form f2("TopSecret", 50, 10);

        std::cout << b << std::endl;
        std::cout << f2 << std::endl;

        b.signForm(f2);

        std::cout << f2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n----- Test 3: Invalid Form grade (too high) -----" << std::endl;
    try
    {
        Form f3("InvalidForm", 0, 20);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n----- Test 4: Invalid Form grade (too low) -----" << std::endl;
    try
    {
        Form f4("InvalidForm", 151, 20);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n----- Test 5: Multiple signing attempts -----" << std::endl;
    try
    {
        Bureaucrat c("Charlie", 10);
        Form f5("License", 20, 5);

        c.signForm(f5);
        c.signForm(f5);

        std::cout << f5 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
// int main()
// {
//     try
//     {
//         Bureaucrat a("Said", 1);
//         Bureaucrat b("Ali", 150);

//         std::cout << a << std::endl;
//         std::cout << b << std::endl;
//     }
//     catch (std::exception& e)
//     {
//         std::cout << e.what() << std::endl;
//     }

//     return 0;
// }
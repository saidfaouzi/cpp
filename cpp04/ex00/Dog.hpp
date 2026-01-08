/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:50:09 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/01/08 16:20:58 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"


class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog &obj);
        Dog &operator=(Dog &obj);
        ~Dog();
        void makeSound() const;
        std::string getType() const;
};
#endif
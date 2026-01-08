/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:35:42 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/01/08 17:34:45 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;


const int size = 10;
Animal* animals[size];

for (int i = 0; i < size / 2; i++)
    animals[i] = new Dog();

for (int i = size / 2; i < size; i++)
    animals[i] = new Cat();

std::cout << "\n--- Making sounds ---\n" << std::endl;
for (int i = 0; i < size; i++)
    animals[i]->makeSound();

std::cout << "\n--- Deleting animals ---\n" << std::endl;
for (int i = 0; i < size; i++)
    delete animals[i];
return 0;
}
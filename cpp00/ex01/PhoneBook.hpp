/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:50:19 by sfaouzi           #+#    #+#             */
/*   Updated: 2025/12/25 11:24:41 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
    private:
        int total_numbers;
        Contact contacts[8];
    public:
        int ADD(int i);
        int SEARCH();
        void set_t_n();
        void display_contact(int i);
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 17:53:03 by sfaouzi           #+#    #+#             */
/*   Updated: 2025/12/24 16:50:51 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getter(std::string fl)
{
    if (fl == "first_name")
        return (Contact::first_name);
    else if (fl == "last_name")
        return (Contact::last_name);
    else if (fl == "nickname")
        return (Contact::nickname);
    else if (fl == "phone_number")
        return (Contact::phone_number);
    else if (fl == "darkest_secret")
        return (Contact::darkest_secret);
    return (NULL);
}

void Contact::setter(std::string fl, std::string value)
{
    if(fl == "first_name")
        first_name = value;
    else if(fl == "last_name")
        last_name = value;
    else if(fl == "nickname")
        nickname = value;
    else if(fl == "phone_number")
        phone_number = value;
    else if(fl == "darkest_secret")
        darkest_secret = value;
}

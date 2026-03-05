/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:36:19 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/03/05 22:47:08 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Form {
    private:
        const std::string name;
        bool sign;
        const int grade_to_sign;
        const int grade_to_execute;
    public:
        Form();
        Form(Form& other);
        Form &operator=(Form& other);
        ~Form();
        std::string getName();
        bool getSign();
        const int getGrade_to_sign();
        const int getGrade_to_execute();
        void beSigned(Bureaucrat &other);
        
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        }
        
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        }
};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif
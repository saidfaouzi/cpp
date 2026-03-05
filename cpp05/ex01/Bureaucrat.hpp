/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:22:13 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/03/05 23:00:34 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(std::string n , int g);
    Bureaucrat(Bureaucrat &other);
    Bureaucrat &operator=(Bureaucrat &other);
    ~Bureaucrat();
    void increment();
    void decrement();
    const std::string getName();
    int getGrade();
    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    void signForm(Form& form);
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& b);

#endif

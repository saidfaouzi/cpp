/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:22:20 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/03/05 23:11:38 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default")
{
    grade = 12;
    std::cout << "created object" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &other) : name(other.name)
{
    if (other.grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(other.grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = other.grade;
    std::cout << "copy constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string n , int g) : name(n)
{
    if (g < 1)
        throw Bureaucrat::GradeTooHighException();
    if(g > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = g;
    std::cout << "copy constructor" << std::endl;
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat &other)
{
    this->grade = other.grade;
    std::cout << "copy assignement constructor" << std::endl;
    return *this;
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "destructor called" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("GradeTooHighException");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("GradeTooLowException");
}

const std::string Bureaucrat::getName()
{
    return (name);
}
int Bureaucrat::getGrade()
{
    return (grade);
}

void Bureaucrat::increment()
{
    if (grade-1 < 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void Bureaucrat::decrement()
{
    if(grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

std::ostream &operator<<(std::ostream& os, Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return os;
}

void Bureaucrat::signForm()
{
    Form::beSigned();
    <bureaucrat> signed <form>
    std::cout  << Bureaucrat  << "signed " << Form 
}

void Bureaucrat::signForm(Form& form)
{
    try
    {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << name << " couldn't sign "
                  << form.getName()
                  << " because "
                  << e.what()
                  << std::endl;
    }
}
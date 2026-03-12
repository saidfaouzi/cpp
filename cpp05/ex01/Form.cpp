/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:36:23 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/03/12 01:15:42 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), sign(false), grade_to_sign(150), grade_to_execute(1)
{
    std::cout << "created object : " << std::endl;
}

Form::Form(std::string named, int sign_grade, int exec_grade)
    : name(named), sign(false), grade_to_sign(sign_grade), grade_to_execute(exec_grade)
{
    if (grade_to_sign < 1 || grade_to_execute < 1)
        throw Form::GradeTooHighException();
    if (grade_to_sign > 150 || grade_to_execute > 150)
        throw Form::GradeTooLowException();
    std::cout << "parametrized constructor called : " << std::endl;
}
Form::Form(Form& other)
    : name(other.name), sign(other.sign), grade_to_sign(other.grade_to_sign), grade_to_execute(other.grade_to_execute)
{
    if (grade_to_sign < 1 || grade_to_execute < 1)
        throw Form::GradeTooHighException();
    if (grade_to_sign > 150 || grade_to_execute > 150)
        throw Form::GradeTooLowException();
    std::cout << "copy constructor called : " << std::endl;
}
Form &Form::operator=(Form& other)
{
    if (this != &other)
        sign = other.sign;
    std::cout << "copy assignement constructor called : " << std::endl;
    return *this;
}
Form::~Form()
{
    std::cout << "deconstructor called : " << std::endl;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("GradeTooHighException");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("GradeTooLowException");
}

std::string Form::getName() const
{
    std::cout << "getter of name called : " << std::endl;
    return (name); 
}
bool Form::getSign() const
{
    std::cout << "getter of sign called : " << std::endl;
    return (sign);
}
int Form::getGrade_to_sign() const
{
    std::cout << "getter of grade of sign called : " << std::endl;
    return (grade_to_sign);
}
int Form::getGrade_to_execute() const
{
    std::cout << "getter of grade of execute called : " << std::endl;
    return (grade_to_execute);
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
    os << "Form " << f.getName()
       << ", signed: " << (f.getSign() ? "yes" : "no")
       << ", grade to sign: " << f.getGrade_to_sign()
       << ", grade to execute: " << f.getGrade_to_execute();

    return os;
}

void Form::beSigned(Bureaucrat &other)
{
    if (other.getGrade() <= grade_to_sign)
        sign = true;
    else
        throw GradeTooLowException();
}

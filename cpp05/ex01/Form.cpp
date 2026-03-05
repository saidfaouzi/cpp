/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:36:23 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/03/05 22:52:12 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :name("default")
{
    grade_to_sign = 12;
    grade_to_execute = 13;
    std::cout << "created object : " << std::endl;
}
Form::Form(Form& other): name(other.name)
{
    if(*this->grade_to_execute < 1 || *this->grade_to_execute < 1)
        throw Form::GradeTooHighException();
    if(*this->grade_to_sign > 150 || *this->grade_to_sign > 150)
        throw Form::GradeTooLowException();
    *this->grade_to_execute = other.grade_to_execute;
    *this->grade_to_sign = other.grade_to_sign;
    std::cout << "copy constructor called : " << std::endl;
}
Form &Form::operator=(Form& other)
{
    *this->grade_to_execute = other.grade_to_execute;
    *this->grade_to_sign = other.grade_to_sign;
    std::cout << "copy assignement constructor called : " << std::endl;
}
Form::~Form()
{
    std::cout << "deconstructor called : " << std::endl;
}

std::string Form::getName()
{
    std::cout << "getter of name called : " << std::endl;
    return (*this->name); 
}
bool Form::getSign()
{
    std::cout << "getter of sign called : " << std::endl;
    return (*this->sign);
}
const int Form::getGrade_to_sign()
{
    std::cout << "getter of grade of sign called : " << std::endl;
    return (*this->getGrade_to_sign);
}
const int Form::getGrade_to_execute()
{
    std::cout << "getter of grade of execute called : " << std::endl;
    return (*this->getGrade_to_execute);
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
    os << "Form " << f.getName()
       << ", signed: " << (f.getSigned() ? "yes" : "no")
       << ", grade to sign: " << f.getGradeSign()
       << ", grade to execute: " << f.getGradeExec();

    return os;
}

void Form::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() <= grade_to_sign)
        sign = true;
    else
        throw GradeTooLowException();
}
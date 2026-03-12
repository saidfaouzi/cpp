/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:36:23 by sfaouzi           #+#    #+#             */
/*   Updated: 2026/03/12 00:06:10 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :name("default"), grade_to_sign(150), grade_to_execute(1)
{
    std::cout << "created object : " << std::endl;
}

Form::Form(std::string named, int sign, int exec): name(named), grade_to_sign(sign), grade_to_execute(exec)
{
    std::cout << "parametrized constructor called : " << std::endl;
}
Form::Form(Form& other): name(other.name), grade_to_sign(other.grade_to_sign), grade_to_execute(other.grade_to_execute)
{
    if(grade_to_execute < 1 || grade_to_execute < 1)
        throw Form::GradeTooHighException();
    if(grade_to_sign > 150 || grade_to_sign > 150)
        throw Form::GradeTooLowException();
    // *this->grade_to_execute = other.grade_to_execute;
    // *this->grade_to_sign = other.grade_to_sign;
    std::cout << "copy constructor called : " << std::endl;
}
Form &Form::operator=(Form& other)
{
    (void)other;
    std::cout << "copy assignement constructor called : " << std::endl;
    return *this;
}
Form::~Form()
{
    std::cout << "deconstructor called : " << std::endl;
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
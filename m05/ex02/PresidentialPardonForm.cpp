/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:42:59 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/23 17:05:04 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Nothing", 145, 137)
{
    std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
    this->target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Nothing", 145, 137)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called" << "n";
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& f) : Form(f.getName(), f.getSignd(), f.getExecute())
{
    std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
    this->target = f.target;
}

void PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
    std::cout << "PresidentialPardonForm assignment operateur called" << std::endl;
    this->target = f.target;
    this->setIssigned(f.getIssigned());
}

void drawtree(std::fstream &f)
{
    f << "        &&& &&  & &&" << std::endl;
    f << "      && &/&|& ()|/ @, &&" << std::endl;
    f << "    &/(/&/&||/& /_/)_&/_&" << std::endl;
    f << "   &() &/&|()|/&/ % & ()" << std::endl;
    f << "  &__&&_ |& |&&/&__%_/_& &&" << std::endl;
    f << "&&   && & &| &| /& & % ()& /&&" << std::endl;
    f << " ()&_---()&&|&&-&&--%---()~" << std::endl;
    f << "     &&     |||" << std::endl;
    f << "             |||" << std::endl;
    f << "             |||" << std::endl;
    f << "             |||" << std::endl;
    f << "       , -=-~  .-^- _" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getIssigned())
    {
        if (executor.getGrade())
        {
            std::cout << "<" << this->target << ">" << " has been pardoned by Zafod Beeblebrox.\n";
        }
    }
}
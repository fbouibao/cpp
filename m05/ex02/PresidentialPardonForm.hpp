/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:27:31 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/29 10:16:15 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &f);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &f);
        void execute(Bureaucrat const & executor) const;
};

#endif
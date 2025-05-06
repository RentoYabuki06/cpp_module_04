/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:30:14 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/06 20:13:46 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure() : _type("Cure")
{
	std::cout << "Cure constructed." << std::endl;
}

Cure::Cure(std::string const & type) : _type(type)
{
	std::cout << "Cure [" << this->getType() << "] constructed." << std::endl;
}

Cure::Cure(const Cure& other) : _type(other.getType())
{
	std::cout << "Cure [" << this->getType() << "] constructed." << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	std::cout << "Cure assigned." << std::endl;
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure destructed." << std::endl;
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* shoots an CURE bolt at " << target.getName() << " *" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:16:36 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/06 20:14:09 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria constructed." << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria [" << this->getType() << "] constructed." << std::endl;
}

AMateria::AMateria(const AMateria& other) : _type(other.getType())
{
	std::cout << "AMateria [" << this->getType() << "] constructed." << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	std::cout << "AMateria assigned." << std::endl;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructed." << std::endl;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter& target)
{
	(void) target;
	std::cout << "* uses a mysterious materia *" << std::endl;
}

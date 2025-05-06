/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:57:05 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/06 14:06:13 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string	_type;
	AMateria();
public:
	AMateria(std::string const & type);
	AMateria(const AMateria& other);
	AMateria& operator=(const AMateria& other);
	virtual ~AMateria();

	std::string const &	getType() const;
	
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

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
	std::out << "* uses a mysterious materia *" << std::endl;
}

#endif

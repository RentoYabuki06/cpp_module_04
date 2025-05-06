/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:29:41 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/06 14:15:33 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class CURE : AMateria
{
public:
	CURE();
	CURE(const CURE& other);
	CURE& operator=(const CURE& other);
	virtual ~CURE();

	AMateria*	clone() const;
	void		use(ICharacter& target);
};

CURE::CURE() : _type("CURE")
{
	std::cout << "CURE constructed." << std::endl;
}

CURE::CURE(std::string const & type) : _type(type)
{
	std::cout << "CURE [" << this->getType() << "] constructed." << std::endl;
}

CURE::CURE(const CURE& other) : _type(other.getType())
{
	std::cout << "CURE [" << this->getType() << "] constructed." << std::endl;
}

CURE& CURE::operator=(const CURE& other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	std::cout << "CURE assigned." << std::endl;
	return *this;
}

CURE::~CURE()
{
	std::cout << "CURE destructed." << std::endl;
}

AMateria* CURE::clone() const
{
	return new CURE(*this);
}

void	CURE::use(ICharacter& target)
{
	std::cout << "* shoots an CURE bolt at " << target.getName() << " *" << std::endl;
}

#endif

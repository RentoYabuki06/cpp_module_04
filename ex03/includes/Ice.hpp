/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:28:46 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/06 14:15:45 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : AMateria
{
public:
	Ice();
	Ice(const Ice& other);
	Ice& operator=(const Ice& other);
	virtual ~Ice();

	AMateria*	clone() const;
	void		use(ICharacter& target);
};

Ice::Ice() : _type("Ice")
{
	std::cout << "Ice constructed." << std::endl;
}

Ice::Ice(std::string const & type) : _type(type)
{
	std::cout << "Ice [" << this->getType() << "] constructed." << std::endl;
}

Ice::Ice(const Ice& other) : _type(other.getType())
{
	std::cout << "Ice [" << this->getType() << "] constructed." << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	std::cout << "Ice assigned." << std::endl;
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice destructed." << std::endl;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

#endif

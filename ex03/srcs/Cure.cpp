/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:30:14 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/11 17:08:43 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructed." << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
	std::cout << "Cure copied." << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
	{
		AMateria::operator=(other);
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
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

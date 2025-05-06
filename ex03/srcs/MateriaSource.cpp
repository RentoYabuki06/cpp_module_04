/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:56:00 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/06 15:56:10 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructed." << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		_templates[i] = NULL;
	}
	
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	std::cout << "MateriaSource copied." << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		_templates[i] = other._templates[i] ? other._templates[i]->clone : NULL;
	}
	
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	std::cout << "MateriaSource assigned." << std::endl;
	if (this != &other)
	{
		for (size_t i = 0; i < 4; i++)
		{
			delete _templates[i];
			_templates[i] = other._templates[i] ? other._templates[i]->clone : NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructed." << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		delete _templates[i];
	}
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (!_templates[i])
		{
			_templates[i] = materia;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_templates[i] && _templates[i]->getType() == type)
		{
			return _templates[i]->clone();
		}
	}
	
}

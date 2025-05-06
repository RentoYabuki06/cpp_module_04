/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:27:27 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/06 20:13:58 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character()
{
	std::cout << "Character constructed." << std::endl;
}

Character::Character(std::string const & name) : _name(name)
{
	std::cout << "Character [" << name << "] constructed." << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
	
}

Character::Character(const Character& other) : _name(other._name)
{
	std::cout << "Character copied." << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		_inventory[i] = other._inventory[i] ? other._inventory[i]->clone() : NULL;
	}
}

Character& Character::operator=(const Character& other)
{
	std::cout << "Character assigned." << std::endl;
	if (this != &other)
	{
		for (size_t i = 0; i < 4; i++)
		{
			delete _inventory[i];
			_inventory[i] = other._inventory[i] ? other._inventory[i]->clone() : NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Character destructed." << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		delete _inventory[i];
	}
}

std::string const & Character::getName() const
{
	return _name;
}

void	Character::equip(AMateria* m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if(!_inventory[i])
		{
			_inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
	{
		_inventory[idx]->use(target);
	}
}

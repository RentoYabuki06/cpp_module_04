/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 12:08:39 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/05 12:27:13 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(std::string name) : type(name)
{
	std::cout << "Animal " << name << " Constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	*this = other;
	std::cout << "Animal " << other.getType() << " copied." << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		this->type = other.getType();
	}
	std::cout << "Animal " << other.getType() << " assigned." << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal " << this->getType() << " destructed." << std::endl;
}

const std::string& Animal::getType() const
{
	return this->type;
}

void	Animal::makeSound() const
{
	std::cout << "Animal makeSound called." << std::endl;
}

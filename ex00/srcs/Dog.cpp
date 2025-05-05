/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:27:25 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/05 12:27:42 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(std::string name) : Animal(name)
{
	std::cout << "Dog " << name << " Constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog " << other.getType() << " copied." << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	std::cout << "Dog " << other.getType() << " assigned." << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog " << this->getType() << " destructed." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof! (Dog makeSound called)" << std::endl;
}

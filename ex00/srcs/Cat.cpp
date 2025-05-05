/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:27:56 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/05 12:28:11 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(std::string name) : Animal(name)
{
	std::cout << "Cat " << name << " Constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat " << other.getType() << " copied." << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	std::cout << "Cat " << other.getType() << " assigned." << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat " << this->getType() << " destructed." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow! (Cat makeSound called)" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:27:56 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/05 14:19:26 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	_brain = new Brain();
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(std::string name) : Animal(name)
{
	_brain = new Brain();
	std::cout << "Cat " << name << " Constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	_brain = new Brain(*other._brain);
	std::cout << "Cat " << other.getType() << " copied." << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		if (_brain)
			delete _brain;
		_brain = new Brain(*other._brain);
	}
	std::cout << "Cat " << other.getType() << " assigned." << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat " << this->getType() << " destructed." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow! (Cat makeSound called)" << std::endl;
}

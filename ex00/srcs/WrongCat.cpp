/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:37:55 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/05 12:38:23 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(std::string name) : WrongAnimal(name)
{
	std::cout << "WrongCat " << name << " Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat " << other.getType() << " copied." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	std::cout << "WrongCat " << other.getType() << " assigned." << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat " << this->getType() << " destructed." << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow! (WrongCat makeSound called)" << std::endl;
}

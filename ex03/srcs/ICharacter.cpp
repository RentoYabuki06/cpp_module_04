/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:22:08 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/07 17:19:10 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "ICharacter constructed." << std::endl;
}

ICharacter::ICharacter(const ICharacter& other)
{
	(void)other;
	std::cout << "ICharacter copied." << std::endl;
}

ICharacter& ICharacter::operator=(const ICharacter& other)
{
	(void)other;
	std::cout << "ICharacter assigned." << std::endl;
	return *this;
}

ICharacter::~ICharacter()
{
	std::cout << "ICharacter destructed." << std::endl;
}

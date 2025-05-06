/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:22:08 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/06 20:13:26 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "ICharacter constructed." << std::endl;
}

ICharacter::ICharacter(const ICharacter& other)
{
	std::cout << "ICharacter copied." << std::endl;
}

ICharacter& ICharacter::operator=(const ICharacter& other)
{
	std::cout << "ICharacter assigned." << std::endl;
}

ICharacter::~ICharacter()
{
	std::cout << "ICharacter destructed." << std::endl;
}

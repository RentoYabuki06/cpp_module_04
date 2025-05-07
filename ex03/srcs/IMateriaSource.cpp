/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:24:10 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/07 17:22:24 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	std::cout << "IMateriaSource constructed." << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource& other)
{
	(void)other;
	std::cout << "IMateriaSource copied." << std::endl;
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& other)
{
	(void)other;
	std::cout << "IMateriaSource assigned." << std::endl;
	return *this;
}

IMateriaSource::~IMateriaSource()
{
	std::cout << "IMateriaSource destructed." << std::endl;
}

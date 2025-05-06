/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:24:10 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/06 15:55:41 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	std::cout << "IMateriaSource constructed." << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource& other)
{
	std::cout << "IMateriaSource copied." << std::endl;
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& other)
{
	std::cout << "IMateriaSource assigned." << std::endl;
}

IMateriaSource::~IMateriaSource()
{
	std::cout << "IMateriaSource destructed." << std::endl;
}

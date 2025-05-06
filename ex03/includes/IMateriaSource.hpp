/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:24:13 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/06 14:23:23 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
private:
	IMateriaSource();
	IMateriaSource(const IMateriaSource& other);
	IMateriaSource& operator=(const IMateriaSource& other);
public:
	virtual ~IMateriaSource();
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

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

#endif

#endif

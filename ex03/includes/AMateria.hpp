/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:16:39 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/05 17:20:58 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>

class AMateria
{
protected:
	/* data */
public:
	AMateria(std::string const & type);
	~AMateria();

	std::string const &	getType() const;
	
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

AMateria::AMateria(std::string const & type)
{
}

AMateria::~AMateria()
{
}


#endif

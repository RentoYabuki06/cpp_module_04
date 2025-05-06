/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:28:46 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/06 15:54:35 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : AMateria
{
public:
	Ice();
	Ice(const Ice& other);
	Ice& operator=(const Ice& other);
	virtual ~Ice();

	AMateria*	clone() const;
	void		use(ICharacter& target);
};

#endif

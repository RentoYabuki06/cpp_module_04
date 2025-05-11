/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DropBox.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:25:37 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/11 16:42:05 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DROPBOX_HPP
#define DROPBOX_HPP

#include "AMateria.hpp"

class DropBox
{
private:
	static const int	kMax = 100;
	AMateria*			_materia[kMax];
	int					_count;

public:
	DropBox();
	DropBox(const DropBox& other);
	DropBox& operator=(const DropBox& other);
	~DropBox();

	bool		add(AMateria* m);
	AMateria*	take(int idx);
};

#endif

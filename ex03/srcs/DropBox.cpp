/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DropBox.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:25:53 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/11 16:42:17 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DropBox.hpp"

DropBox::DropBox() : _count(0)
{
	for (int i = 0; i < kMax; i++)
		_materia[i] = NULL;
}

DropBox::~DropBox()
{
	for (int i = 0; i < kMax; i++)
		delete _materia[i];
}

bool	DropBox::add(AMateria* m)
{
	if (!m || _count >= kMax)
		return false;
	_materia[_count++] = m;
	return true;
}

AMateria* DropBox::take(int idx)
{
	if (idx < 0 || idx >= _count)
		return NULL;
	AMateria* tmp = _materia[idx];
	for (int i = idx; i < _count - 1; i++)
		_materia[i] = _materia[i + 1];
	_materia[_count - 1] = NULL;
	_count--;
	return tmp;
}

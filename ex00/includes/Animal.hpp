/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 12:08:37 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/05 12:26:57 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
private:
	std::string	type;
public:
	Animal();
	Animal(std::string name);
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	virtual ~Animal();

	const std::string& getType() const;
	virtual void makeSound() const;
};

#endif

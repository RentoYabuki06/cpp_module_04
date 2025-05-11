/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:27:32 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/11 19:20:14 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria* _inventory[4];
	Character();

    static const int MAX_FLOOR_SIZE = 100;
    static AMateria* _floor[MAX_FLOOR_SIZE];
    static int _floorCount;

public:
	Character(std::string const & name);
	Character(const Character& other);
	Character& operator=(const Character& other);
	virtual ~Character();

	std::string const & getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);

    static void cleanupFloor();
};

#endif

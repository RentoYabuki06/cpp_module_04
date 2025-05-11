/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:16:41 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/11 19:16:02 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/IMateriaSource.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/AMateria.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	delete tmp;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	std::cout << "\n=== New Character created ===" << std::endl;
	ICharacter* alice = new Character("alice");
	
	std::cout << "\n=== Set max slot equipment ===" << std::endl;
	AMateria* extra1 = new Ice();
	AMateria* extra2 = new Cure();
	AMateria* extra3 = new Ice();
	AMateria* extra4 = new Cure();
	alice->equip(extra1);
	alice->equip(extra2);
	alice->equip(extra3);
	alice->equip(extra4);
	delete extra1;
	delete extra2;
	delete extra3;
	delete extra4;

	std::cout << "\n=== Try to set excess slot ===" << std::endl;
	AMateria* over = new Ice();
	alice->equip(over);  // スロットが空いていなければ無視されるはず
	delete over;         // 装備されていない前提
	
	std::cout << "\n=== Check all slots after over-equip ===" << std::endl;
	for (int i = 0; i < 5; ++i) {
		std::cout << "[use slot " << i << "] ";
		alice->use(i, *alice);
	}
	
	std::cout << "\n=== Unequip and use test ===" << std::endl;
	alice->unequip(1);
	alice->use(1, *alice);
	delete alice;

	std::cout << "\n=== Clean up floor ===" << std::endl;
	Character::cleanupFloor();
	return 0;
}

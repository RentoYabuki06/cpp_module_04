/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:24:07 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/05 12:38:49 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

// Test: Call makeSound() directly on a WrongAnimal instance
void testWrongAnimalDirectCall() {
	std::cout << "\n[Test] WrongAnimal direct call:\n";
	WrongAnimal a;
	a.makeSound(); // Expected: WrongAnimal sound
}

// Test: Call makeSound() directly on a WrongCat instance
void testWrongCatDirectCall() {
	std::cout << "\n[Test] WrongCat direct call:\n";
	WrongCat c;
	c.makeSound(); // Expected: WrongCat sound
}

// Test: Call makeSound() using a WrongAnimal pointer pointing to a WrongCat
void testWrongAnimalPointerToCat() {
	std::cout << "\n[Test] WrongAnimal* pointing to WrongCat:\n";
	const WrongAnimal* wa = new WrongCat();
	wa->makeSound(); // Expected: WrongAnimal sound (no virtual function)
	delete wa;
}

// Test: Call makeSound() using a WrongCat pointer
void testWrongCatPointer() {
	std::cout << "\n[Test] WrongCat* pointer:\n";
	const WrongCat* wc = new WrongCat();
	wc->makeSound(); // Expected: WrongCat sound
	delete wc;
}


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	testWrongAnimalDirectCall();      // Test direct use of base class
	testWrongCatDirectCall();         // Test direct use of derived class
	testWrongAnimalPointerToCat();    // Demonstrates lack of polymorphism
	testWrongCatPointer();            // Works correctly via derived class pointer
	return 0;
}

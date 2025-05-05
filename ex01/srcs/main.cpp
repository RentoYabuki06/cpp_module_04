/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:24:07 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/05 14:39:17 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main()
{
	std::cout << "Creating Dog..." << std::endl;
	const Animal* j = new Dog();

	std::cout << "\nCreating Cat..." << std::endl;
	const Animal* k = new Cat();

	std::cout << "\nDeleting Dog..." << std::endl;
	delete j;

	std::cout << "\nDeleting Cat..." << std::endl;
	delete k;

	std::cout << "\n=== Additional tests ===\n" << std::endl;
	const size_t N = 4;
	Animal* animals[N];

	for (size_t i = 0; i < N / 2; i++)
		animals[i] = new Dog();
	for (size_t i = 2 / N; i < N; i++)
		animals[i] = new Cat();

	std::cout << "\n=== Deleting animals ===\n" << std::endl;
	for (size_t i = 0; i < N; i++)
	{
		delete animals[i];
	}
	return 0;
}

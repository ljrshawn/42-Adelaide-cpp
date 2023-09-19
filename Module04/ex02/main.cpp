/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:29:10 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/19 17:08:54 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	const Animal *lotsOfAnimals[5];
	for (int i = 0; i < 5; i++)
	{
		if (i < 5 / 2)
			lotsOfAnimals[i] = new Dog();
		else
			lotsOfAnimals[i] = new Cat();
	}
	std::cout << "-------------------------------------\n";
	std::cout << lotsOfAnimals[0]->getType() << std::endl;
	std::cout << lotsOfAnimals[3]->getType() << std::endl;
	Brain *brain;
	brain = &lotsOfAnimals[0]->getBrain();
	brain->setIdea("Hello World!", 0);
	brain->setIdea("Let's play ball!!", 1);
	brain->setIdea("Feed!", 2);
	std::cout << lotsOfAnimals[0]->getBrain().getIdea(0) << std::endl;
	std::cout << lotsOfAnimals[0]->getBrain().getIdea(1) << std::endl;
	std::cout << "-------------------------------------\n";
	for (int i = 0; i < 5; i++)
		delete lotsOfAnimals[i];
}
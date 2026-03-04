#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	/*DESCOMENTE AQUI PARA TESTE
		//Animal a;
		//Animal *a;
	*/
	std::cout << "=================" << std::endl;
	std::cout << "Constructors and setIdeas:\n" << std::endl;
		/*
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		const WrongAnimal* wrong = new WrongAnimal();
		const WrongAnimal* wrongcat = new WrongCat();
		*/
	int size = 4;
	const Animal* animals[size];
	for (int i = 0; i < size; i++){
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		Dog *dog = dynamic_cast<Dog*>(const_cast<Animal*>(animals[i]));
		Cat *cat = dynamic_cast<Cat*>(const_cast<Animal*>(animals[i]));
		if (dog){
			if (i % 2 == 0)
				dog->getBrain()->setIdea(i, "I want play");
			else
				dog->getBrain()->setIdea(i, "I want sniff some ass");
		}
		if (cat){
			if (i % 2 == 0)
				cat->getBrain()->setIdea(i, "I want sleep");
			else
				cat->getBrain()->setIdea(i, "I want bury some poops");
		}
	}

	std::cout << "\n=================" << std::endl;
	std::cout << "Sounds and Ideas:\n" << std::endl;
	for (int i = 0; i < size; i++){
		Dog *dog = dynamic_cast<Dog*>(const_cast<Animal*>(animals[i]));
		Cat *cat = dynamic_cast<Cat*>(const_cast<Animal*>(animals[i]));
		std::cout << animals[i]->getType() << ": ";
		animals[i]->makeSound();
		if (dog)
			std::cout << dog->getBrain()->getIdea(i) << std::endl;
		if (cat)
			std::cout << cat->getBrain()->getIdea(i) << std::endl;
	}
	// std::cout << meta->getType() << ": ";
	// meta->makeSound();
	// std::cout << i->getType() << ": ";
	// i->makeSound();
	// std::cout << j->getType() << ": ";
	// j->makeSound();
	// std::cout << wrongcat->getType() << ": ";
	// wrongcat->makeSound();

	std::cout << "\n=================" << std::endl;
	std::cout << "Destructors:\n" << std::endl;
	for (int i = 0; i < size; i++)
		delete animals[i];
	/*
	delete meta;
	delete j;
	delete i;
	delete wrong;
	delete wrongcat;
	*/

	return (0);
}

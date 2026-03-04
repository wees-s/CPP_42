#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "=================" << std::endl;
	std::cout << "Constructors:\n" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << "\n=================" << std::endl;
	std::cout << "Sounds:\n" << std::endl;
	std::cout << meta->getType() << ": ";
	meta->makeSound();
	std::cout << i->getType() << ": ";
	i->makeSound();
	std::cout << j->getType() << ": ";
	j->makeSound();
	std::cout << wrongcat->getType() << ": ";
	wrongcat->makeSound();

	std::cout << "\n=================" << std::endl;
	std::cout << "Destructors:\n" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete wrong;
	delete wrongcat;
	return (0);
}

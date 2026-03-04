#include "Animal.hpp"
#include "Cat.hpp"

Cat::~Cat() {
	delete brain;
	std::cout << "Cat: destructor" << std::endl;
}

Cat::Cat() : Animal()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat: constructor" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat: copy constructor" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "Cat: copy operator" << std::endl;
	if (this != &copy)
	{
		delete this->brain;
		this->brain = new Brain(*copy.brain);
		this->type = copy.type;
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "miau" << std::endl;
}

Brain* Cat::getBrain() const{
	return (brain);
};
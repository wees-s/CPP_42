#include "Animal.hpp"
#include "Dog.hpp"

Dog::~Dog() {
	delete brain;
	std::cout << "Dog: destructor" << std::endl;
}

Dog::Dog() : Animal()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog: constructor" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog: copy constructor" << std::endl;
	brain = new Brain(*copy.brain);
	type = copy.type;
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "Dog: copy operator" << std::endl;
	if (this != &copy)
	{
		delete this->brain;
		this->brain = new Brain(*copy.brain);
		this->type = copy.type;
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "au" << std::endl;
}

Brain* Dog::getBrain() const{
	return (brain);
};

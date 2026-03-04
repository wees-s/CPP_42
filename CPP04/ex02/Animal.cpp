#include "Animal.hpp"

Animal::~Animal() {
	std::cout << "Animal: destructor" << std::endl;
}

Animal::Animal() : type("Nothing") {
	std::cout << "Animal: constructor" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal: copy constructor" << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal& copy)
{
	std::cout << "Animal: copy operator" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

std::string Animal::getType() const {
	return (type);
}

void Animal::makeSound() const {
	std::cout << "no one sound audible..." << std::endl;
}

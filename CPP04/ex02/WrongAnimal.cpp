#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal: destructor" << std::endl;
}

WrongAnimal::WrongAnimal() : type("nothing") {
	std::cout << "WrongAnimal: constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal: copy constructor" << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal: copy operator" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

std::string WrongAnimal::getType() const {
	return (type);
}

void WrongAnimal::makeSound() const {
	std::cout << "popopo pipipi" << std::endl;
}

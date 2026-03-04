#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::~WrongCat() {
	std::cout << "WrongCat: destructor" << std::endl;
}

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat: constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat: copy constructor" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	std::cout << "WrongCat: copy operator" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat: pipipi popopo" << std::endl;
}

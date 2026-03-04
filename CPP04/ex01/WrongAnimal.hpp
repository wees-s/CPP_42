#pragma once

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		virtual ~WrongAnimal();
		WrongAnimal();
		WrongAnimal(const WrongAnimal& copy);
		WrongAnimal& operator=(const WrongAnimal& copy);

		void makeSound() const;
		std::string getType() const;
};
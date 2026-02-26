#include "ClapTrap.hpp"

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap: Destructor called" << std::endl;
}

ClapTrap::ClapTrap(): _Name(""), _Hit(0), _Energy(0), _Attack(0){
    std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap){
    std::cout << "ClapTrap: Copy constructor called" << std::endl;
    *this = clapTrap;
}

ClapTrap::ClapTrap(const std::string& Name): _Name(Name), _Hit(10), _Energy(10), _Attack(0){
    std::cout << "ClapTrap: Named constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
    if (this != &clapTrap){
        this->_Name = clapTrap._Name;
        this->_Attack = clapTrap._Attack;
        this->_Energy = clapTrap._Energy;
        this->_Hit = clapTrap._Hit;
    }
    return (*this);
}

/*members*/
void ClapTrap::attack(const std::string& target){
    if (_Energy > 0 && _Hit > 0){
        _Energy--;
        std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << _Attack << " points of damage! ENERGY REMAINING: " << _Energy << std::endl;
    }
    else
        std::cout << "ClapTrap: No life or energy to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (_Hit > 0){
        if (amount >= _Hit){
            _Hit = 0;
            std::cout << "ClapTrap " << _Name << " died after received " << amount << " of damage!" << std::endl;
        }
        else{
            _Hit -= amount;
            std::cout << "ClapTrap " << _Name << " received " << amount << " of damage!" << std::endl;
        }
    }
    else
        std::cout << "ClapTrap: Don't hit the dead body." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (_Energy > 0 && _Hit > 0){
        if (_Hit + amount > 10){
            _Energy--;
            _Hit = 10;
        }
        else{
            _Hit += amount;
            _Energy--;
        }
        std::cout << "ClapTrap " << _Name << " repaired! And now have " << _Hit << " of Hit Points! ENERGY REMAINING: " << _Energy << std::endl;
    }
    else
        std::cout << "ClapTrap: No life or energy to repair!" << std::endl;
}
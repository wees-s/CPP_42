#include "ClapTrap.hpp"
#include "FragTrap.hpp"

/*orthodox canonical*/
FragTrap::~FragTrap(){
    std::cout << "FragTrap: Destructor called" << std::endl;
}

FragTrap::FragTrap(): ClapTrap(){
    _Name = "";
    _Hit = 100;
    _Energy = 100;
    _Attack = 30;
    std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragTrap): ClapTrap(fragTrap){
    std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& Name): ClapTrap(Name){
    _Hit = 100;
    _Energy = 100;
    _Attack = 30;
    std::cout << "FragTrap: Named constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap){
    if (this != &fragTrap)
        ClapTrap::operator=(fragTrap);
    return (*this);
}
/*members*/
void FragTrap::attack(const std::string& target){
    if (_Energy > 0 && _Hit > 0){
        _Energy--;
        std::cout << "FragTrap " << _Name << " attacks " << target << ", causing " << _Attack << " points of damage! ENERGY REMAINING: " << _Energy << std::endl;
    }
    else
        std::cout << "FragTrap: No life or energy to attack!" << std::endl;
}

void FragTrap::highFivesGuys( void ){
    std::cout << "FragTrap: HI FIVE GUYS!!!!" << std::endl;
}
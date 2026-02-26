#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/*orthodox canonical*/
ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap: Destructor called" << std::endl;
}

ScavTrap::ScavTrap(): ClapTrap(){
    _Name = "";
    _Hit = 100;
    _Energy = 50;
    _Attack = 20;
    std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap): ClapTrap(scavTrap){
    std::cout << "ScavTrap: Copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& Name): ClapTrap(Name){
    _Hit = 100;
    _Energy = 50;
    _Attack = 20;
    std::cout << "ScavTrap: Named constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap){
    if (this != &scavTrap)
        ClapTrap::operator=(scavTrap);
    return (*this);
}
/*members*/
void ScavTrap::attack(const std::string& target){
    if (_Energy > 0 && _Hit > 0){
        _Energy--;
        std::cout << "ScavTrap " << _Name << " attacks " << target << ", causing " << _Attack << " points of damage! ENERGY REMAINING: " << _Energy << std::endl;
    }
    else
        std::cout << "ScavTrap: No life or energy to attack!" << std::endl;
}

void ScavTrap::guardGate( void ){
    std::cout << "ScavTrap is now in gatekeeper mode." << std::endl;
}
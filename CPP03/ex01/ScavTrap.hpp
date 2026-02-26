#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
        /*orthodox canonical*/
        ~ScavTrap();
        ScavTrap();
        ScavTrap(const ScavTrap& scavTrap);
        ScavTrap(const std::string& Name);
        ScavTrap& operator=(const ScavTrap& scavTrap);
        /*members*/
        void attack(const std::string& target);
        void guardGate( void );
};

#endif
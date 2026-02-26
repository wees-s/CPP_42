#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        /*orthodox canonical*/
        ~FragTrap();
        FragTrap();
        FragTrap(const FragTrap& fragTrap);
        FragTrap(const std::string& Name);
        FragTrap& operator=(const FragTrap& fragTrap);
        /*members*/
        void attack(const std::string& target);
        void highFivesGuys( void );
};

#endif
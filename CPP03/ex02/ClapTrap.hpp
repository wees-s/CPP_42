#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
    protected:
        std::string  _Name;
        unsigned int _Hit;
        unsigned int _Energy;
        unsigned int _Attack;
    public:
        /*orthodox canonical*/
        ~ClapTrap();
        ClapTrap();
        ClapTrap(const ClapTrap& clapTrap);
        ClapTrap(const std::string& Name);
        ClapTrap& operator=(const ClapTrap& clapTrap);
        /*members*/
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
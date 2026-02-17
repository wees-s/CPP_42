#include "Zombie.h"

void Zombie::announce( void ){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(){
}

Zombie::~Zombie(){
    std::cout << name << ": I will die..." << std::endl;
}

void Zombie::setName( std::string name ){
    this->name = name;
    std::cout << name << ": I'm alive...(?)" << std::endl;
}
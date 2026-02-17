#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name ){
    Zombie* zombie = new Zombie[N];
    std::cout << "A HORDE OF " << N << " ZOMBIES WAS SPOTTED!!" << std::endl;
    for (int i = 0; i < N; i++){
        zombie[i].setName(name);
    }
    return (zombie);
}
#include "Zombie.h"

int main(void)
{
    Zombie *zombie;

    zombie = newZombie("Heap");
    zombie->announce();
    delete zombie;
    randomChump("Stack");
    return (0);
}
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a;
	ClapTrap b("WesleyzinhooO");
	ClapTrap c(b);
	a = b;

	b.attack("BiazinhaAH");
	b.attack("BiazinhaAH");

	b.takeDamage(1);
	b.takeDamage(2);

	b.beRepaired(1);
	b.beRepaired(10);

	std::cout << "-----------------------------------------------------------" << std::endl;

	// Testando limite de energia
	for (int i = 0; i < 12; i++)
		b.attack("Teste");

    b.takeDamage(20);
    b.takeDamage(100000);
	return (0);
}
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "---- ClapTrap Test ----" << std::endl;
	ClapTrap a("A");
	a.attack("target1");
	a.takeDamage(5);
	a.beRepaired(3);

	std::cout << "\n---- ScavTrap Test ----" << std::endl;
	ScavTrap b("B");
	b.attack("target2");      // deve usar override do ScavTrap
	b.takeDamage(30);
	b.beRepaired(10);
	b.guardGate();

	std::cout << "\n---- FragTrap Test ----" << std::endl;
	FragTrap c("C");
	c.attack("target3");      // deve usar override do FragTrap
	c.takeDamage(40);
	c.beRepaired(20);
	c.highFivesGuys();        // função exclusiva do FragTrap

	std::cout << "\n---- Energy Drain Test (ScavTrap) ----" << std::endl;
	for (int i = 0; i < 55; i++)
		b.attack("dummy");

	std::cout << "\n---- Energy Drain Test (FragTrap) ----" << std::endl;
	for (int i = 0; i < 105; i++)
		c.attack("dummy");

	std::cout << "\n---- Destruction ----" << std::endl;
	return 0;
}
#include "ScavTrap.hpp"


int main(void)
{
	ScavTrap a("Pepe");
	ScavTrap b("Juan");

	b.printStats();
	a.attack(b.getName());
	b.takeDamage(20);
	b.beRepaired(5);
	ScavTrap c(a);
	c.guardGate();
	b.printStats();
	
	return 0;
}
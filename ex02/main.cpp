#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main(void)
{
	ClapTrap a("Pepe");
	ScavTrap b("Juan");
	FragTrap c("Paco");

	a.printStats();
	b.printStats();
	c.printStats();

	b.attack(c.getName());
	c.takeDamage(20);
	c.beRepaired(10);
	c.attack(a.getName());
	a.takeDamage(30);

	c.highFivesGuys();
	a.printStats();
	b.printStats();
	c.printStats();
	
	return 0;
}
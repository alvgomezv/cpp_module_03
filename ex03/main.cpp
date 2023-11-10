#include "DiamondTrap.hpp"


int main(void)
{
	DiamondTrap	a("Pepe");
	DiamondTrap b;

	a.printStats();

	a.attack("Jose");
	a.whoAmI();

	return 0;
}
#include "DiamondTrap.hpp"


int main(void)
{
	DiamondTrap	diamondTrap("Pepe");

	diamondTrap.printStats();
	
	diamondTrap.attack("Jose");
	diamondTrap.whoAmI();
	
	return 0;
}
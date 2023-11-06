#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
	
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap&	operator=(const DiamondTrap& other);
		~DiamondTrap(void);

		void	attack(std::string const& target);
		void	whoAmI(void);
};

#endif
#ifndef SCAVTRAP_HPP
# define SCATRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& other);
		ScavTrap&	operator=(const ScavTrap& other);
		~ScavTrap(void);

		void	guardGate(void);
};

#endif
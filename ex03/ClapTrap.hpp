#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string _name;
		int			_health;
		int			_energy;
		int			_attack;
		
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		ClapTrap&	operator=(const ClapTrap& other);
		~ClapTrap(void);

		void	attack(const std::string& target);
		void	takeDamage(unsigned	int	amount);
		void	beRepaired(unsigned	int	amount);
		std::string	getName(void) const;
		void	printStats(void) const;
};

#endif
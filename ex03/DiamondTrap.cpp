#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("anonymous_clap_name"), ScavTrap("anonymous_clap_name"), FragTrap("anonymous_clap_name")
{
	this->_name = "anonymous";
	ClapTrap::_name = "anonymous_clap_name";
	this->_energy = 50; // have to do it manualy, the ClapTrap values are overwritten by FragTrap
	std::cout << "DiamondTrap " << this->_name << " default constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name") , ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_energy = 50;
	std::cout << "DiamondTrap " << this->_name << " constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other)
{
	*this = other;
	std::cout << "DiamondTrap " << this->_name << " copy constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	this->_name = other._name;
	this->_health = other._health;
	this->_energy = other._energy;
	this->_attack = other._attack;
	std::cout << "DiamondTrap " << this->_name << " assignation operator called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " destructor called" << std::endl;
	return ;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << this->_name << " has ClapTrap name " << this->ClapTrap::_name << std::endl;
	return ;
}

void	DiamondTrap::printStats(void)
{
	std::cout << "DiamondTrap " << this->_name << " stats:" << std::endl;
	std::cout << "Health: " << this->_health << std::endl;
	std::cout << "Energy: " << this->_energy << std::endl;
	std::cout << "Attack: " << this->_attack << std::endl;
	return ;
}


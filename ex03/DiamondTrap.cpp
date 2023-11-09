#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->_name = "anonymous";
	this->ClapTrap::_name = "anonymous_clap_name";
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
	std::cout << "DiamondTrap " << this->_name << " default constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	std::cout << "Attack: " << FragTrap::_attack << ", " << ScavTrap::_attack <<  std::endl;
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
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

void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
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


#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(void)
{
	this->_name = "anonymous";
	this->ClapTrap::_name = "anonymous_clap_name";
	this->_health = this->FragTrap::_health;
	this->_energy = this->ScavTrap::_energy;
	this->_attack = this->FragTrap::_attack;
	std::cout << "DiamondTrap " << this->_name << " default constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_health = this->FragTrap::_health;
	this->_energy = this->ScavTrap::_energy;
	this->_attack = this->FragTrap::_attack;
	std::cout << "DiamondTrap " << this->_name << " constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
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


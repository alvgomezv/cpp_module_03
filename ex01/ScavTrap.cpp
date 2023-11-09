#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_name = "anonymous";
	this->_health = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "ScavTrap " << this->_name << " default constructor called" << std::endl;
	return ;
}
ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_health = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "ScavTrap " << this->_name << " constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	*this = other;
	std::cout << "ScavTrap " << this->_name << " copy constructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	this->_name = other._name;
	this->_health = other._health;
	this->_energy = other._energy;
	this->_attack = other._attack;
	std::cout << "ScavTrap " << this->_name << " assignation operator called" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
	if (this->_health == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead and cannot enter in Gate keeper mode" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode" << std::endl;
	return ;
}
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("anonymous") , _health(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	return ;
}
ClapTrap::ClapTrap(std::string name) : _name(name) , _health(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	this->_name = other._name;
	this->_health = other._health;
	this->_energy = other._energy;
	this->_attack = other._attack;
	std::cout << "ClapTrap assignation operator called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_health == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead and cannot attack " << target << std::endl;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy and cannot attack " << target << std::endl;
		return ;
	}
	this->_energy -= 1;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
	if (this->_energy < 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy left" << std::endl;
		this->_energy = 0;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
		return ;
	}
	this->_health -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	if (this->_health < 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		this->_health = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_health == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy and cannot be repaired" << std::endl;
		return ;
	}
	this->_health += amount;
	std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points of health!" << std::endl;
	this->_energy -= 1;
	if (this->_energy < 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy left" << std::endl;
		this->_energy = 0;
	}
}

std::string	ClapTrap::getName(void) const
{
	return this->_name;
}

void	ClapTrap::printStats(void) const
{
	std::cout << "ClapTrap " << this->_name << " stats:" << std::endl;
	std::cout << "Health: " << this->_health << std::endl;
	std::cout << "Energy: " << this->_energy << std::endl;
	std::cout << "Attack: " << this->_attack << std::endl;
}

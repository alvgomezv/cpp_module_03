#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_name = "anonymous";
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "FragTrap " << this->_name << " default constructor called" << std::endl;
	return ;
}
FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "FragTrap " << this->_name << " constructor called: "  << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	*this = other;
	std::cout << "FragTrap " << this->_name << " copy constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	this->_name = other._name;
	this->_health = other._health;
	this->_energy = other._energy;
	this->_attack = other._attack;
	std::cout << "FragTrap " << this->_name << " assignation operator called" << std::endl;
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " destructor called" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_health == 0)
	{
		std::cout << "FragTrap " << this->_name << " is dead and cannot ask for high fives" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " is asking for high fives" << std::endl;
	return ;
}

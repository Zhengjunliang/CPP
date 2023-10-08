/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:42:55 by juzheng           #+#    #+#             */
/*   Updated: 2023/10/04 16:42:56 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << _name << ": ClapTrap Default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << _name << ": ClapTrap string construct called!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
	std::cout << _name << ": ClapTrap copy construct called!" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << _name << ": ClapTrap Destructor called!" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
	if (this != &copy)
	{
		_name = copy._name;
		_hitPoints = copy._hitPoints;
		_energyPoints = copy._energyPoints;
		_attackDamage = copy._attackDamage;
	}
	return (*this);
}

void	ClapTrap::setName( std::string new_name )
{
	_name = new_name;
}

void	ClapTrap::setHP( int new_hp )
{
	_hitPoints = new_hp;
}

void	ClapTrap::setEP( int new_ep )
{
	_energyPoints = new_ep;
}

void	ClapTrap::setATK( int new_atkdmg )
{
	_attackDamage = new_atkdmg;
}


std::string	ClapTrap::getName( void ) const
{
	return (_name);
}

int	ClapTrap::getHP( void ) const
{
	return (_hitPoints);
}

int	ClapTrap::getEP( void ) const
{
	return (_energyPoints);
}

int	ClapTrap::getATK( void ) const
{
	return (_attackDamage);
}

void ClapTrap::attack(const std::string &target)
{
	if (_energyPoints < 1 || _hitPoints < 1)
	{
		std::cout << _name << "is out of energy or is dead and can't attack!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints < 1 || _hitPoints < 1)
	{
		std::cout << _name << "is out of energy or is dead and can't repair itself!" << std::endl;
		return ;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " repair himself of " << amount << " hit points, now having " << _hitPoints << " HP!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints < 1)
	{
		std::cout << _name << " is already dead!" << std::endl;
		return ;
	}
	if (amount >= (unsigned int)_hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " take damage of " << amount << " hit points, causing his health to drop to " << _hitPoints << " HP!" << std::endl;
	if (_hitPoints < 1)
		std::cout << _name << " died" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:07:02 by juzheng           #+#    #+#             */
/*   Updated: 2023/10/06 15:07:05 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	setName("ScavTrap");
	setHP(100);
	setEP(50);
	setATK(20);
	std::cout << getName() << ": ScavTrap Default Constructor called!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setHP(100);
	setEP(50);
	setATK(20);
	std::cout << getName() << ": ScavTrap String Constructor called!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy.getName())
{
	*this = copy;
	std::cout << getName() << ": ScavTrap Copy Constructor called!" << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
	if (this != &copy)
	{
		setName(copy.getName());
		setHP(copy.getHP());
		setEP(copy.getEP());
		setATK(copy.getATK());
	}
	return (*this);
}

void ScavTrap::guardGate()
{
	if (getHP() < 1)
	{
		std::cout << "ScavTrap " << getName() << " is dead." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << getName() << " is now in \"Gate Keeper\" mode!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_energyPoints < 1 || _hitPoints < 1)
	{
		std::cout << _name << "is out of energy or is dead and can't attack!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << getName() << ": ScavTrap Destructor called!" << std::endl;
	return ;
}

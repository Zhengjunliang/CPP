/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:08:07 by juzheng           #+#    #+#             */
/*   Updated: 2023/10/08 16:08:08 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("DiamondTrap")
{
	_name = "DiamondTrap";
	ClapTrap::_name = "DiamondTrap_clap_name";

	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;

	std::cout << _name << ": DiamondTrap Constructor called!" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";

	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;

	std::cout << _name << ": DiamondTrap String Constructor called!" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
	_name = copy._name;
	ClapTrap::_name = copy._name + "_clap_name";

	FragTrap::_hitPoints = copy._hitPoints;
    ScavTrap::_energyPoints = copy._energyPoints;
    FragTrap::_attackDamage = copy._attackDamage;

	*this = copy;
	std::cout << _name << ": DiamondTrap Copy Constructor called!" << std::endl;
	return ;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &copy)
{
	if (this != &copy)
	{
		setName(copy._name);
		setHP(copy.getHP());
		setEP(copy.getEP());
		setATK(copy.getATK());
	}
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << _name << " and " << ClapTrap::_name << " is my father" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << _name << ": DiamondTrap Destructor called!" << std::endl;
	return ;
}

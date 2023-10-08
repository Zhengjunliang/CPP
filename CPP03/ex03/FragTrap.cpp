/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:13:30 by juzheng           #+#    #+#             */
/*   Updated: 2023/10/06 16:13:31 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	setName("FragTrap");
	setHP(100);
	setEP(100);
	setATK(30);
	std::cout << getName() << ": FragTrap Default Constructor called!" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setHP(100);
	setEP(100);
	setATK(30);
	std::cout << getName() << ": FragTrap String Constructor called!" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << getName() << ": FragTrap Destructor called!" << std::endl;
	return ;
}

void FragTrap::highFivesGuys(void)
{
	if (getHP() < 1)
	{
		std::cout << getName() << "is dead!" << std::endl;
		return ;
	}
	std::cout << getName() << ": You want a high five?\nHere you go." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &copy)
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

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy.getName())
{
	*this = copy;
	std::cout << getName() << ": FragTrap Copy Constructor called!" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:43:28 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/08 16:43:29 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void) {}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " is destroyed!!!" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name( std::string zombieName)
{
	name = zombieName;
}

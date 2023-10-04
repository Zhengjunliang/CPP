/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:47:02 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/06 14:47:03 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::string input;
	std::string newName;
	
	while (!std::cin.eof())
	{
		std::cout << "Insert zombie name: " << std::flush;
		std::getline(std::cin, newName);
		if (newName.empty())
			continue;
		Zombie *z = newZombie(newName);
		z->announce();
		randomChump(newName);
		delete z;
	}
	return 0;
}

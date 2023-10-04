/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:42:41 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/08 16:42:42 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::string	newName;
	int horde = 0;
	Zombie *ptr = NULL;

	while (!std::cin.eof())
	{
		std::cout << "Insert the number of zombie: ";
		while (!(std::cin >> horde))
		{
			if (std::cin.eof())
				return 1;
			std::cout << "Invalid input. Please enter an integer: ";
			std::cin.clear();
			std::cin.ignore(1000, '\n');
		}
		std::cin.ignore(1000, '\n');
		std::cout << "Insert zombie name: " << std::flush;
		std::getline(std::cin, newName);
		if (newName.empty())
			continue;
		ptr = zombieHorde(horde, newName);
		delete[] ptr;
	}
	return 0;
}


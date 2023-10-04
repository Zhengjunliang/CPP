/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:34:04 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/14 15:34:04 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	std::string levels[] = {"DEBUG",
						  "INFO",
						  "WARNING",
						  "ERROR"};
	Harl _Harl;

	if (ac == 2)
	{
		std::string comments = av[1];
		int i;
		for(i = 0; i < 4; i++)
		{
			if (!levels[i].compare(comments))
			{
				switch (i)
				{
				case 0:
					_Harl.complain(levels[0]);
				case 1:
					_Harl.complain(levels[1]);
				case 2:
					_Harl.complain(levels[2]);
				case 3:
					_Harl.complain(levels[3]);
					return 0;
				}
			}
		}
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 0;
	}
	std::cout << "Wrong arguments" << std::endl;
	return 1;
}

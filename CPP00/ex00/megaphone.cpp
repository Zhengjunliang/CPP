/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:04:46 by juzheng           #+#    #+#             */
/*   Updated: 2023/08/21 16:04:47 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Megaphone
{
	public:
		void	printToUpperCase(char **msg)
		{
			for (int i = 0; msg[i]; i++)
			{
				for (int j = 0; msg[i][j]; j++)
					std::cout << (char)toupper(msg[i][j]);
			}
			std::cout << std::endl;
		}

		void	printDefaultMessage()
		{
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		}
};

int	main(int argc, char **argv)
{
	Megaphone megaphone;
	if (argc > 1)
		megaphone.printToUpperCase(++argv);
	else
		megaphone.printDefaultMessage();
	return 0;
}
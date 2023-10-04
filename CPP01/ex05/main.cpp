/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:14:39 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/14 15:14:40 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	std::string comments;
	Harl _Harl;

	while (!std::cin.eof())
	{
		std::cout << "Insert comments: ";
		std::getline(std::cin, comments);
		if(!comments.empty())
			_Harl.complain(comments);
	}
	return 0;
}

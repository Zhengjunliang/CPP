/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:12:07 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/12 15:12:08 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

void replace_line(std::ifstream& file, std::ofstream& file2, std::string& s1, std::string& s2)
{
	std::string line;
	while (std::getline(file, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert (pos, s2);
		}
		file2 << line << std::endl;
	}
	file.close();
	file2.close();
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string	filename = av[1];
		std::string	s1	= av[2];
		std::string	s2	= av[3];
		std::ifstream file;

		file.open(filename.c_str());
		if (!file.is_open())
		{
			std::cout << "Failed to open the file: " << filename << std::endl;
			return (-1);
		}
		else
		{
			std::ofstream file2(filename.append(".replace").c_str());
			if (file2)
				replace_line(file, file2, s1, s2);
			else
				std::cout << "Failed to creaate file.replace!!!" << std::endl;
			return 0;
		}
		return 1;
	}
	std::cout << "Wrong Arguments." << std::endl;
	return 0;
}

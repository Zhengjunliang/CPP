/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:47:18 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/06 14:47:19 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
class Zombie
{
private:
	std::string	name;

public:
	Zombie(std::string	set_name);
	~Zombie();
	void announce(void);
};

void	randomChump(std::string	name);
Zombie* newZombie(std::string	name);

#endif

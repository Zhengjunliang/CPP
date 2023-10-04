/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:43:19 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/08 16:43:21 by juzheng          ###   ########.fr       */
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
	Zombie();
	~Zombie();
	void announce( void );
	void set_name( std::string zombieName );
};

Zombie* zombieHorde( int N, std::string	name );

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:43:44 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/08 16:43:46 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	Zombie	*zHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zHorde[i].set_name(name);
		zHorde[i].announce();
	}
	return zHorde;
}

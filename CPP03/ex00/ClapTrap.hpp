/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:42:43 by juzheng           #+#    #+#             */
/*   Updated: 2023/10/04 16:42:44 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
public:
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const& copy);
	~ClapTrap( void );

	ClapTrap& operator=(ClapTrap const& copy);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int	amount);
	void	beRepaired(unsigned int	amount);
};

#endif

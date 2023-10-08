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
protected:
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

	void	setName( std::string new_name );
	void	setHP( int new_hp );
	void	setEP( int new_ep );
	void	setATK( int new_atkdmg );

	std::string	getName( void ) const;
	int			getHP( void ) const;
	int			getEP( void ) const;
	int			getATK( void ) const;

	void	attack(const std::string& target);
	void	takeDamage(unsigned int	amount);
	void	beRepaired(unsigned int	amount);
};

#endif

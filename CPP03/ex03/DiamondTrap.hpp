/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:08:00 by juzheng           #+#    #+#             */
/*   Updated: 2023/10/08 16:08:01 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap: public FragTrap , public ScavTrap
{
private:
	std::string _name;
public:
	DiamondTrap( void );
	DiamondTrap( std::string name );
	DiamondTrap( DiamondTrap const& copy );
	~DiamondTrap( void );

	DiamondTrap& operator=(DiamondTrap const& copy);

	using	ScavTrap::attack;
	void	whoAmI();
};

#endif

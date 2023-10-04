/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:15:54 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/08 17:15:55 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string new_name ) : name(new_name), _weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::setWeapon( Weapon &set_w){
	_weapon = &set_w;
}
void HumanB::attack(){
	std::cout << name << " attacks with their " << _weapon->getType() << std::endl;
}

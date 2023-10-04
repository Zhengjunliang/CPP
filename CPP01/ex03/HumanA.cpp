/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:15:40 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/08 17:15:41 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string set_name, Weapon &set_w) : name(set_name), _weapon(set_w) {}

HumanA::~HumanA() {}

void HumanA::attack(){
	std::cout << name << " attacks with their " << _weapon.getType() << std::endl;
}

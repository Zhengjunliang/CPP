/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:15:25 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/08 17:15:26 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string set_type ) : type(set_type) {}

Weapon::~Weapon() {}

const std::string &Weapon::getType() const
{
	return type;
}

void Weapon::setType(std::string newType)
{
	type = newType;
}

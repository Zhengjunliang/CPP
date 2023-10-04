/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:42:19 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/15 15:42:20 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_nb_fb = 8;

Fixed::Fixed()	: _fp_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &Fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &Fixed)
		*this = Fixed;
}

Fixed &Fixed::operator=(const Fixed &Fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &Fixed)
	{
		_fp_value = Fixed.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fp_value);
}

void Fixed::setRawBits(int const raw)
{
	_fp_value = raw;
}

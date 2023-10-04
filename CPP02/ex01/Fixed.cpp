/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:37:54 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/25 14:37:55 by juzheng          ###   ########.fr       */
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

Fixed::Fixed(const int nb) : _fp_value(nb << _nb_fb)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb) : _fp_value(roundf(nb * (1 << _nb_fb)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &Fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &Fixed)
		_fp_value = Fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	return (_fp_value);
}

void Fixed::setRawBits(int const raw)
{
	_fp_value = raw;
}

std::ostream&	operator<<(std::ostream& out, const Fixed& obj)
{
	out << obj.toFloat();
	return (out);
}


float	Fixed::toFloat() const
{
	return ((float) (_fp_value) / (1 << _nb_fb));
}

int	Fixed::toInt() const
{
	return (_fp_value >> _nb_fb);
}

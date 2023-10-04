/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:46:53 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/25 15:46:54 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_nb_fb = 8;

Fixed::Fixed()	: _fp_value(0) {}

Fixed::Fixed(Fixed const &Fixed)
{
	if (this != &Fixed)
		*this = Fixed;
}

Fixed::Fixed(const int nb) : _fp_value(nb << _nb_fb) {}

Fixed::Fixed(const float nb) : _fp_value(roundf(nb * (1 << _nb_fb))) {}

Fixed &Fixed::operator=(const Fixed &Fixed)
{
	if (this != &Fixed)
		_fp_value = Fixed.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &obj) const
{
	return(_fp_value > obj._fp_value);
}

bool	Fixed::operator<(const Fixed &obj) const
{
	return(_fp_value < obj._fp_value);
}

bool	Fixed::operator>=(const Fixed &obj) const
{
	return(_fp_value >= obj._fp_value);
}

bool	Fixed::operator<=(const Fixed &obj) const
{
	return(_fp_value <= obj._fp_value);
}

bool	Fixed::operator==(const Fixed &obj) const
{
	return(_fp_value == obj._fp_value);
}

bool	Fixed::operator!=(const Fixed &obj) const
{
	return(_fp_value != obj._fp_value);
}

Fixed	Fixed::operator+(const Fixed& obj) const
{
	Fixed result;
    result._fp_value = _fp_value + obj._fp_value;
    return result;
}

Fixed	Fixed::operator-(const Fixed& obj) const
{
	Fixed result;
    result._fp_value = _fp_value - obj._fp_value;
    return result;
}

Fixed	Fixed::operator*(const Fixed& obj) const
{
	Fixed result;
    result._fp_value = (_fp_value * obj._fp_value) >> _nb_fb;
    return result;
}

Fixed	Fixed::operator/(const Fixed& obj) const
{
	Fixed result;
    result._fp_value = (_fp_value << _nb_fb) / obj._fp_value;
    return result;
}

Fixed	&Fixed::operator++()
{
	++_fp_value;
	return(*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	tmp._fp_value = _fp_value++;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	--_fp_value;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp(*this);
	tmp._fp_value = _fp_value--;
	return(tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return(b);
	return (a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return(b);
	return (a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return(a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return(a);
	return (b);
}

Fixed::~Fixed() {}

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


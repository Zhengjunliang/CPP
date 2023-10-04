/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:37:47 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/25 14:37:48 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	_fp_value;
	const static int _nb_fb;
public:
	Fixed();
	Fixed(Fixed const &Fixed);
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed &operator= (const Fixed &Fixed);
	~Fixed();
	int	getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& obj);

#endif
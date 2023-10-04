/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:42:07 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/15 15:42:08 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	_fp_value;
	const static int _nb_fb;
public:
	Fixed();
	Fixed(Fixed const &Fixed);
	Fixed &operator= (const Fixed &Fixed);
	~Fixed();
	int	getRawBits() const;
	void	setRawBits(int const raw);
};

#endif
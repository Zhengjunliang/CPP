/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:16:38 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/25 16:16:39 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(Fixed(0)) , _y(Fixed(0)) {}

Point::Point(const float x, const float y) : _x(Fixed(x)) , _y(Fixed(y)) {}

Point::Point(const Point &obj) : _x(obj._x),  _y(obj._y) {}

Point	&Point::operator=(const Point &obj)
{
    if (this != &obj)
	{
		*((Fixed *)&_x) = obj._x;
		*((Fixed *)&_y) = obj._y;
	}
	return (*this);
}

Fixed Point::getX(void)
{
    return (_x);
}

Fixed Point::getY(void)
{
    return (_y);
}

void Point::setX(Fixed const & ref)
{
    *((Fixed *)&_x) = ref;
}

void Point::setY(Fixed const & ref)
{
    *((Fixed *)&_y) = ref;
}
Point::~Point() {}


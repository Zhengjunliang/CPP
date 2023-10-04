/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:16:33 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/25 16:16:34 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed	_x;
	const Fixed	_y;
public:
	Point();
	Point(const float x, const float y);
	Point(const Point &obj);
	Point	&operator=(const Point &obj);
	~Point();
	Fixed getX(void);
    Fixed getY(void);
    void setX(Fixed const & ref);
    void setY(Fixed const & ref);
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif

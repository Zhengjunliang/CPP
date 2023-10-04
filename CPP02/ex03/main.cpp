/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juzheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:16:08 by juzheng           #+#    #+#             */
/*   Updated: 2023/09/25 16:16:08 by juzheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main()
{
	Point a(1.0, 1.0);
    Point b(2.0, 5.0);
    Point c(4.0, 2.0);
    Point p(2.3, 1.52);
    Point p2(10.0, 1.52);

    std::cout << bsp(a, b, c, p) << std::endl;
    std::cout << bsp(a, b, p, c) << std::endl;
    std::cout << bsp(a, b, c, p2) << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:17:25 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/06 21:42:30 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main()
{
	Point a(0, 0);
	Point b(10, 0);
	Point c(5, 10);
	
	Point p1(5, 5);    // Inside
	Point p2(10, 0);   // On vertex (False)
	Point p3(5, 10);   // On edge (False)
	Point p4(15, 5);   // Outside
	std::cout << "p1: " << bsp(a, b, c, p1) << std::endl;
	std::cout << "p2: " << bsp(a, b, c, p2) << std::endl;
	std::cout << "p3: " << bsp(a, b, c, p3) << std::endl;
	std::cout << "p4: " << bsp(a, b, c, p4) << std::endl;
	return (0);
}

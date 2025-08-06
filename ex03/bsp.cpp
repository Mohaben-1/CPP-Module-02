/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 21:33:23 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/06 21:53:21 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	ft_fabs(float f)
{
	if (f < 0)
		return (-f);
	return (f);
}

float	area(Point const &p1, Point const &p2, Point const &p3)
{
	return (0.5f * ft_fabs(((p1.getX_val() * (p2.getY_val() - p3.getY_val())) + (p2.getX_val() * (p3.getY_val() - p1.getY_val())) + (p3.getX_val() * (p1.getY_val() - p2.getY_val())))));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	total;
	float	a1;
	float	a2;
	float	a3;

	total = area(a, b, c);
	a1 = area(point, b, c);
	a2 = area(a, point, c);
	a3 = area(a, b, point);
	if (a1 == 0 || a2 == 0 || a3 == 0 || a1 + a2 + a3 != total)
		return (false);
	return (true);
}

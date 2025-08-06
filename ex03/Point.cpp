/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:05:46 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/06 21:49:54 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x(0), y(0) {}

Point::Point( const float x, const float y ) : x(x), y(y) {}

Point::Point( const Point& other ) : x(other.getX()), y(other.getY()) {}

Point& Point::operator=( const Point& other )
{
	(void)other;
	return (*this);
}

Point::~Point( void ) {}

Fixed	Point::getX() const
{
	return (x);
}

Fixed	Point::getY() const
{
	return (y);
}

float	Point::getX_val() const
{
	return (x.toFloat());
}

float	Point::getY_val() const
{
	return (y.toFloat());
}

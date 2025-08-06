/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:02:02 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/06 21:49:03 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	private:
		const Fixed	x;
		const Fixed	y;
	public:
		Point( void );
		Point( const float x, const float y );
		Point( const Point& other );
		Point& operator=( const Point& other );
		~Point( void );
		Fixed	getX() const;
		Fixed	getY() const;
		float	getX_val() const;
		float	getY_val() const;
};

#endif
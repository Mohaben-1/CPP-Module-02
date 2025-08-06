/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:17:42 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/02 17:05:12 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath> 

class	Fixed
{
	private:
		static const int	fractionalBits = 8;
		int					raw;
	public:
		Fixed( void );
		Fixed( const int n );
		Fixed( const float f );
		Fixed( const Fixed& copy );
		Fixed& operator=( const Fixed & copy );
		~Fixed( void );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		bool	operator>( const Fixed& other ) const;
		bool	operator>=( const Fixed& other ) const;
		bool	operator<( const Fixed& other ) const;
		bool	operator<=( const Fixed& other ) const;
		bool	operator==( const Fixed& other ) const;
		bool	operator!=( const Fixed& other ) const;
		Fixed	operator+( const Fixed other );
		Fixed	operator-( const Fixed other );
		Fixed	operator/( const Fixed other );
		Fixed	operator*( const Fixed other );
		Fixed&	operator++( void );
		Fixed	operator++( int );
		Fixed&	operator--( void );
		Fixed	operator--( int );
		static const Fixed&	min( const Fixed& a, const Fixed& b );
		static Fixed&		min( Fixed& a, Fixed& b );
		static const Fixed&	max( const Fixed& a, const Fixed& b );
		static Fixed&		max( Fixed& a, Fixed& b );
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif

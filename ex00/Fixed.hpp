/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 16:59:41 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/02 16:01:48 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		static const int	fractionalBits = 8;
		int					raw;
	public:
		Fixed( void );
		Fixed( const Fixed& copy );
		Fixed& operator=( const Fixed & copy );
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
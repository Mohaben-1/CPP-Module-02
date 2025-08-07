/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:58:49 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/07 15:17:19 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n ) : raw(n << fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float f ) : raw(roundf(f * (1 << fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& copy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=( const Fixed& copy )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		raw = copy.raw;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (raw);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->raw = raw;
}

int	Fixed::toInt( void ) const
{
	return (raw >> fractionalBits);
}

float	Fixed::toFloat( void ) const
{
	return ((float)raw / (1 << fractionalBits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed()
{
	Fixed::fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	this->fixedPoint = other.fixedPoint;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{ 
	if (this != &other)
		this->fixedPoint = other.fixedPoint;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (42);
}

void Fixed::setRawBits( int const raw )
{
	(void)raw;
	std::cout << raw << std::endl;
	return ;
}



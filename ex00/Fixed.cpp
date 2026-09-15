#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	this->_fixedPoint = other.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{ 
	if (this != &other)
		this->_fixedPoint = other.getRawBits();
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
	return (_fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
	_fixedPoint = raw;
	return ;
}



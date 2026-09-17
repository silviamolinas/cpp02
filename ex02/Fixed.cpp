#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::_bitsFractional = 8;

Fixed::Fixed(): _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPoint = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other)
{ 
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fixedPoint = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	return (_fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
	_fixedPoint = raw;
	return ;
}

Fixed::Fixed( const int integerInt )
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = integerInt * (1 << _bitsFractional);
}

Fixed::Fixed( const float decimalFloat )
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = roundf(decimalFloat * (1 << _bitsFractional));
}

float	Fixed::toFloat( void ) const
{
	float convertedValue;
	convertedValue = (float)this->_fixedPoint / (1 << _bitsFractional);
	return convertedValue;
}

int	Fixed::toInt( void ) const
{
	int	convertedValue;
	convertedValue = this->_fixedPoint / (1 << _bitsFractional);
	return convertedValue;
}

std::ostream& operator<<( std::ostream& out, const Fixed& fixed )
{
	out << fixed.toFloat();
	return out;
};

bool Fixed::operator>(const Fixed& other) const
{
	return (this->_fixedPoint > other.getRawBits());
}

bool Fixed::operator<(const Fixed& other) const
{
    return (this->_fixedPoint < other.getRawBits());
}

bool Fixed::operator<=(const Fixed& other) const
{
    return (this->_fixedPoint <= other.getRawBits());
}

bool Fixed::operator>=(const Fixed& other) const
{
    return (this->_fixedPoint >= other.getRawBits());
}

bool Fixed::operator==(const Fixed& other) const
{
    return (this->_fixedPoint == other.getRawBits());
}

bool Fixed::operator!=(const Fixed& other) const
{
    return (this->_fixedPoint != other.getRawBits());
}

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed result;
	result._fixedPoint = _fixedPoint + other._fixedPoint;ddgetRawBits();
	return(result);
}

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	_fixedPoint;
		const static int _bitsFractional;
	public:
		Fixed();
		Fixed( const int integerInt );
		Fixed( const float decimalFloat );
		Fixed( const Fixed& other );
		Fixed& operator=( const Fixed& other );
		~Fixed();
		
		float	toFloat( void ) const;
		int	toInt( void ) const;
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream& operator<<( std::ostream& out, const Fixed& fixed );

#endif

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

		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		
		Fixed operator+(const Fixed&other) const;
		Fixed operator-(const Fixed&other) const;
		Fixed operator*(const Fixed&other) const;
		Fixed operator/(const Fixed&other) const;

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);


/*		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b;

		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed& a, const Fixed& b); */
};

std::ostream& operator<<( std::ostream& out, const Fixed& fixed );

#endif

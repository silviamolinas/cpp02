#include <iostream>
#include "Fixed.hpp"

int	main( void )
{

//debug apenas - apagar 
	Fixed a(10.69f);
    Fixed b(20);
	Fixed c = a + b;
    if (c != 30.69f)
        std::cout << "conta errada:" << std::endl;
    else
        std::cout << " conta certa" << c <<  std::endl;





/*	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max( a,b) << std::endl;
*/	
	return 0;
}

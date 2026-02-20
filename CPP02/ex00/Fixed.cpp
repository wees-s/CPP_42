#include "Fixed.h"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    _number = 0;
}

Fixed::Fixed(const Fixed &fixed){
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
};

Fixed& Fixed::operator=(const Fixed &fixed){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed){
        this->_number = fixed._number;
    }
    return(*this);
};

Fixed::~Fixed(){
    std::cout << "Desructor called" << std::endl;
};

int     Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (_number);
};

void    Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function used" << std::endl;
    _number = raw;
};

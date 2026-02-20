#include "Fixed.h"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    _number = 0;
}

Fixed::Fixed(const int number){
    std::cout << "Int constructor called" << std::endl;
    _number = number << _bits;
}

Fixed::Fixed(const float number){
    std::cout << "Int constructor called" << std::endl;
    _number = roundf(number * (1 << _bits));
}

float   Fixed::toFloat( void ) const{
    std::cout << "toFloat member called" << std::endl;
    return ((float)_number / (1 << _bits));
};

int     Fixed::toInt( void ) const{
    return (_number >> _bits);
};

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

std::ostream& operator<<(std::ostream &out, const Fixed &fixed){
    out << fixed.toFloat();
    return (out);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 10:39:56 by wedos-sa          #+#    #+#             */
/*   Updated: 2026/02/25 10:39:57 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed(){
    _number = 0;
}

Fixed::Fixed(const int number){
    _number = number << _bits;
}

Fixed::Fixed(const float number){
    _number = roundf(number * (1 << _bits));
}

float   Fixed::toFloat( void ) const{
    return ((float)_number / (1 << _bits));
};

int     Fixed::toInt( void ) const{
    return (_number >> _bits);
};

Fixed::Fixed(const Fixed &fixed){
    *this = fixed;
};

Fixed& Fixed::operator=(const Fixed &fixed){
    if (this != &fixed){
        this->_number = fixed._number;
    }
    return(*this);
};

Fixed::~Fixed(){
};

int     Fixed::getRawBits( void ) const{
    return (_number);
};

void    Fixed::setRawBits( int const raw ){
    _number = raw;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed){
    out << fixed.toFloat();
    return (out);
};

/*operators*/
bool Fixed::operator>(const Fixed &fixed) const{
    return(this->_number > fixed._number);
}

bool Fixed::operator<(const Fixed &fixed) const{
    return(this->_number < fixed._number);
}

bool Fixed::operator>=(const Fixed &fixed) const{
    return(this->_number >= fixed._number);
}

bool Fixed::operator<=(const Fixed &fixed) const{
    return(this->_number <= fixed._number);
}

bool Fixed::operator==(const Fixed &fixed) const{
    return(this->_number == fixed._number);
}

bool Fixed::operator!=(const Fixed &fixed) const{
    return(this->_number != fixed._number);
}

/*arithmetics*/

Fixed   Fixed::operator+(const Fixed &fixed){
    Fixed result;

    result.setRawBits(this->_number + fixed._number);
    return (result);
}

Fixed   Fixed::operator-(const Fixed &fixed){
    Fixed result;

    result.setRawBits(this->_number - fixed._number);
    return (result);
}

Fixed   Fixed::operator*(const Fixed &fixed){
    Fixed result;

    result.setRawBits((this->_number * fixed._number) >> _bits);
    return (result);
}

Fixed   Fixed::operator/(const Fixed &fixed){
    Fixed result;

    result.setRawBits((this->_number << _bits) / fixed._number);
    return (result);
}

/*increments pos*/
Fixed   Fixed::operator++(int){
    Fixed copyFixed(*this);

    this->_number++;
    return (copyFixed);
}

Fixed   Fixed::operator--(int){
    Fixed copyFixed(*this);

    this->_number--;
    return (copyFixed);
}
/*increments pre*/
Fixed&   Fixed::operator++(){
    this->_number++;
    return (*this);
}

Fixed&   Fixed::operator--(){
    this->_number--;
    return (*this);
}

/*min and max*/
Fixed& Fixed::min(Fixed& a, Fixed& b){
    if (a > b)
        return (b);
    return (a);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
    if (a > b)
        return (b);
    return (a);
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
    if (a > b)
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
    if (a > b)
        return (a);
    return (b);
}

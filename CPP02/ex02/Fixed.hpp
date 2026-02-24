#ifndef FIXED_HPP
#define FIXED_HPP

#include "Fixed.h"

class Fixed{
    private:
        int _number;
        static const int _bits = 8;
    public:
        ~Fixed();
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed(const int number);
        Fixed(const float number);

        /*operators*/
        Fixed&  operator=(const Fixed &fixed);
        bool    operator>(const Fixed &fixed) const;
        bool    operator<(const Fixed &fixed) const;
        bool    operator>=(const Fixed &fixed) const;
        bool    operator<=(const Fixed &fixed) const;
        bool    operator==(const Fixed &fixed) const;
        bool    operator!=(const Fixed &fixed) const;
        Fixed   operator+(const Fixed &fixed);
        Fixed   operator-(const Fixed &fixed);
        Fixed   operator*(const Fixed &fixed);
        Fixed   operator/(const Fixed &fixed);
        /*pos*/
        Fixed   operator++(int);
        Fixed   operator--(int);
        /*pre*/
        Fixed&  operator++();
        Fixed&  operator--();

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
};

#endif
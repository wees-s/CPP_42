#ifndef FIXED_HPP
#define FIXED_HPP

#include "Fixed.h"

class Fixed{
    private:
        int _number;
        static const int _bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed& operator=(const Fixed &fixed);
        ~Fixed();
        Fixed(const int number);
        Fixed(const float number);

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
};

#endif
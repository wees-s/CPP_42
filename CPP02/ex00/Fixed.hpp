/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 10:38:51 by wedos-sa          #+#    #+#             */
/*   Updated: 2026/02/25 10:38:53 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};

#endif

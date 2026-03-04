/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:37:22 by wedos-sa          #+#    #+#             */
/*   Updated: 2026/02/18 12:37:23 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void setName( std::string name );
        void announce( void );
};

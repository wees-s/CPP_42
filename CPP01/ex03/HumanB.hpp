/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:38:50 by wedos-sa          #+#    #+#             */
/*   Updated: 2026/02/18 12:38:51 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"
#include "Weapon.h"

class HumanB{
    private:
        Weapon* weapon;
        std::string name;
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon& weapon);
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:37:57 by wedos-sa          #+#    #+#             */
/*   Updated: 2026/02/18 12:37:58 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"
#include "Weapon.h"

class HumanA{
    private:
        Weapon& weapon;
        std::string name;
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack();
};

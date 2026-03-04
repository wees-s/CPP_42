/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:37:49 by wedos-sa          #+#    #+#             */
/*   Updated: 2026/02/18 12:37:50 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon), name(name) {
    std::cout << "I'm " << name << " and I want some violence!" << std::endl;
}

HumanA::~HumanA() {
    std::cout << "I'm " << name << " and I don't want any more violence.\n" << std::endl;
}

void HumanA::attack(){
    std::cout << name
              << " attacks with their "
              << weapon.getType()
              << std::endl;
}

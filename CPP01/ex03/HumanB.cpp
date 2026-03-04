/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:38:41 by wedos-sa          #+#    #+#             */
/*   Updated: 2026/02/18 12:38:42 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string name){
    this->name = name;
    this->weapon = NULL;
    std::cout << "I'm " << name << " and I want some violence!" << std::endl;
}

HumanB::~HumanB() {
    std::cout << "I'm " << name << " and I don't want any more violence." << std::endl;
}

void HumanB::attack(){
    std::cout << name
              << " attacks with their "
              << weapon->getType()
              << std::endl;
}

void HumanB::setWeapon(Weapon& weapon){
    this->weapon = &weapon;
}

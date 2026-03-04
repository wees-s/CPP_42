/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:38:18 by wedos-sa          #+#    #+#             */
/*   Updated: 2026/02/18 12:38:19 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(std::string type){
    this->type = type;
}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const{
    return(type);
}

void Weapon::setType(const std::string& type){
    this->type = type;
}

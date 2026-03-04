/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:37:04 by wedos-sa          #+#    #+#             */
/*   Updated: 2026/02/18 12:37:05 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void Zombie::announce( void ){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(){
}

Zombie::~Zombie(){
    std::cout << name << ": I will die..." << std::endl;
}

void Zombie::setName( std::string name ){
    this->name = name;
    std::cout << name << ": I'm alive...(?)" << std::endl;
}

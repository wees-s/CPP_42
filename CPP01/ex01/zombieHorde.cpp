/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:37:15 by wedos-sa          #+#    #+#             */
/*   Updated: 2026/02/18 12:37:16 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name ){
    Zombie* zombie = new Zombie[N];
    std::cout << "A HORDE OF " << N << " ZOMBIES WAS SPOTTED!!" << std::endl;
    for (int i = 0; i < N; i++){
        zombie[i].setName(name);
    }
    return (zombie);
}

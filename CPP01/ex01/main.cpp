/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:36:54 by wedos-sa          #+#    #+#             */
/*   Updated: 2026/02/18 12:36:55 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void){
    Zombie* zombie;

    zombie = zombieHorde(5, "Zombieee");
    for(int i = 0; i < 5; i++)
        zombie[i].announce();
    delete[] zombie;
    return (0);
}

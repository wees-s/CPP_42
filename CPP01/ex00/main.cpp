/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:36:01 by wedos-sa          #+#    #+#             */
/*   Updated: 2026/02/18 12:36:03 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
    Zombie* zombie;

    zombie = newZombie("Heap");
    zombie->announce();
    delete zombie;
    randomChump("Stack");
    return (0);
}

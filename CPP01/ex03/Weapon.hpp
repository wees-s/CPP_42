/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wedos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:38:25 by wedos-sa          #+#    #+#             */
/*   Updated: 2026/02/18 12:38:26 by wedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

class Weapon{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        ~Weapon();
        const std::string& getType() const;
        void setType(const std::string& type);
};

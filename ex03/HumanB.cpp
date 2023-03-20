/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:03:59 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/20 15:33:55 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const& name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB(void) {}

void    HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void    HumanB::attack(void) const
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their "
			<< this->_weapon->getType() << std::endl;
	else
	{
		std::cout << this->_name << " attempts to smite their ennemy with a limp slap.";
		std::cout << " Ennemy person is not amused and threatens legal action." << std::endl;
	}
}

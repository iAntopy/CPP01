/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 00:55:25 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/20 15:33:29 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_B_HPP__
# define __HUMAN_B_HPP__

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string const&	_name;
		Weapon*				_weapon;
		
	public:
		HumanB(std::string const& name);
		~HumanB();
		
		void	setWeapon(Weapon& weapon);
		void	attack(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 00:55:25 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/20 15:32:39 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __HUMAN_A_HPP__
# define __HUMAN_A_HPP__

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string const	_name;
		Weapon&				_weapon;
		
	public:
		HumanA(std::string const& name, Weapon& weapon);
		~HumanA();
		
		void    attack(void) const;
};

#endif

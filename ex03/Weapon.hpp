/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 00:49:24 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/18 05:18:42 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

#include <string>

class Weapon
{
	private:
		std::string	_type;
		
	public:
		Weapon(std::string const& type);
		~Weapon(void);

		std::string const&	getType(void)	const;
		void			setType(std::string const& type);
};

#endif

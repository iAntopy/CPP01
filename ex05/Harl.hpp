/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:26:59 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/18 06:26:52 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
# define __HARL_HPP__

class Harl
{
	private:
		
		typedef void (Harl::*memFunc_p)(void);
		
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

		std::string	_ids[4];
		memFunc_p	_complainers[4];
		
	public:
		Harl(void);
		~Harl();

		void	complain(std::string level);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:43:17 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/18 04:58:04 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string _name;
        
    public:
        Zombie(void);
        ~Zombie(void);
        
        void    setName(std::string& name);
        void    annonce(void);
};

Zombie  *zombieHorde(int N, std::string name);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:53:22 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/18 04:28:37 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie  *z = new Zombie(name);

    name.clear();
    if (z)
        return (z);
    else
        std::cerr << "Malloc error" << std::endl;
    return (NULL);
}

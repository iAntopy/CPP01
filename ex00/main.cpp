/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:03:10 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/18 04:30:00 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie      *z;
    std::string name;
    
    name = "Bobby";
    randomChump(name);
    name = "Jimbo Jones";
    z = newZombie(name);
    z->annonce();
    
    delete z;
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:55:03 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/18 04:56:06 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie  *zs;

	zs = zombieHorde(5, "Mumbo Jumbo");

	for (int i=0; i < 5; i++)
		zs[i].annonce();

	delete[] zs;
	return (0);
}

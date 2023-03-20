/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:55:03 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/20 15:24:43 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	const uint32_t	N = 10;
	Zombie  *zs;

	zs = zombieHorde(N, "Mumbo Jumbo");

	for (int i=0; i < N; i++)
		zs[i].annonce();

	delete[] zs;
	return (0);
}

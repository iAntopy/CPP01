/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:25:54 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/20 18:15:39 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main()
{
    Harl    h;
    
    std::cout << "Invalid complaints : " << std::endl;
    h.complain("asdf");
    h.complain("debug");
    h.complain(" DEBUG");
    h.complain("DEBUG-");
    
    std::cout << std::endl << "Valid complaints : " << std::endl;
    std::cout << "ERROR :" << std::endl;
    h.complain("ERROR");
    std::cout << "WARNING :" << std::endl;
    h.complain("WARNING");
    std::cout << "INFO :" << std::endl;
    h.complain("INFO");
    std::cout << "DEBUG :" << std::endl;
    h.complain("DEBUG");

    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 14:11:21 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/14 14:49:22 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
    std::cout << "\nTest Constructor\n" << std::endl;

    FragTrap s1("pileur");
    FragTrap s2("semblable");

    std::cout << "\nTest FragTrap\n" << std::endl;

    s1.attack("semblable");
    s1.takeDamage(20);

    s2.attack("pileur");
    s2.takeDamage(20);

    std::cout << "\nTest FragTrap and DEATH\n" << std::endl;

    s1.takeDamage(100);
    s1.takeDamage(1);
    s1.attack ("semblable");
    s1.beRepaired(10);
    s2.beRepaired(10);

    std::cout << "\nBurn of all the energy\n" << std::endl;

    FragTrap s3("Manceau");
    for (int i = 0; i < 100; i++){
        s3.attack("une vody");
    }

    std::cout << "\nNo more energy" << std::endl;
    s3.attack("ordure menagere");
    s3.beRepaired(10);
    s3.highFivesGuys();

    std::cout << "\nTest Destructor\n" << std::endl;

}
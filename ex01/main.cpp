/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 14:11:21 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/14 12:41:02 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
    std::cout << "\nTest Constructor\n" << std::endl;

    ScavTrap s1("Salim");
    ScavTrap s2("Louis");

    std::cout << "\n### ATTACK USING ScavTrap func ###\n" << std::endl;

    s1.attack("Louis");
    s1.takeDamage(20);

    s2.attack("Salim");
    s2.takeDamage(20);

    std::cout << "\n### ATTACK USING ScavTrap and DEATH ###\n" << std::endl;

    s1.takeDamage(100);
    s1.takeDamage(1);
    s1.attack ("Louis");
    s1.beRepaired(10);
    s2.beRepaired(10);

    std::cout << "\n### NO MORE ENERGY ###\n" << std::endl;

    ScavTrap s3("Manceau");
    for (int i = 0; i < 50; i++){
        s3.attack("une vody");
    }

    std::cout << "\n ### No more energy let's try to do smth ###" << std::endl;
    s3.attack("une poubelle");
    s3.beRepaired(10);
    s3.guardGate();

    std::cout << "\n### DESTRUCTOR PART ###\n" << std::endl;

}

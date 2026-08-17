/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 14:11:21 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/17 17:16:57 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{

    std::cout << "\n### Constructor PART ###\n" << std::endl;

    DiamondTrap s1("LOUIS");
    DiamondTrap s2("CARLOS");

    std::cout << "\n### ATTACK func ###\n" << std::endl;

    s1.attack("Louis");
    s1.takeDamage(20);

    s2.attack("Salim");
    s2.takeDamage(20);

    std::cout << "\n### ATTACK and DEATH ###\n" << std::endl;

    s1.takeDamage(100);
    s1.takeDamage(1);
    s1.attack ("Louis");
    s1.beRepaired(10);
    s2.beRepaired(10);

    std::cout << "\n### NO MORE ENERGY ###\n" << std::endl;

    DiamondTrap s5("Ernegyz");
    
    for (int i = 0; i < 50; i++){
        s5.attack("une puff");}

    std::cout << "\n ### No more energy let's try to do stmh ###" << std::endl;
    s5.attack("une poubelle");
    s5.beRepaired(10);

    std::cout << "\n### CANONICAL FORM TEST ###\n" << std::endl;
    DiamondTrap s3(s1);
    DiamondTrap s4("TEMP");
    s4 = s2;
    s3.whoAmI();
    s4.whoAmI();

    std::cout << "\n### DESTRUCTOR PART ###\n" << std::endl;

}
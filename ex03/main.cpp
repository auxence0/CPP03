/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 14:11:21 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/19 12:08:23 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    std::cout << "\n Test Constructor\n" << std::endl;

    DiamondTrap s1("GAFAM");
    DiamondTrap s2("FAMINE");

    std::cout << "\nTest attack\n" << std::endl;

    s1.attack("MFC");
    s1.takeDamage(20);

    s2.attack("MOI");
    s2.takeDamage(20);

    std::cout << "\nTest Death\n" << std::endl;

    s1.takeDamage(100);
    s1.takeDamage(1);
    s1.attack ("MFC");
    s1.beRepaired(10);
    s2.beRepaired(10);

    std::cout << "\nTest no energy\n" << std::endl;

    DiamondTrap s5("Energy");
    
    for (int i = 0; i < 50; i++){
        s5.attack("TAFF");}

    std::cout << "\nTest func w no energy \n" << std::endl;
    s5.attack("une poubelle");
    s5.beRepaired(10);

    std::cout << "\nTest canonical form\n" << std::endl;
    DiamondTrap s3(s1);
    DiamondTrap s4("RER");
    s4 = s2;
    s3.whoAmI();
    s4.whoAmI();

    std::cout << "\nTest Destructor\n" << std::endl;
}

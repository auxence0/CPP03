/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 14:11:21 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/20 10:36:15 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	x ( "tendancieux" );
	ClapTrap	y ( "tandori" );
	ClapTrap	z ( "Peripetie" );

	std::cout << "\n\nSimple test\n\n";
	x.attack("tandori");
	y.takeDamage(4);
	y.beRepaired(15);

	y.attack("Peripetie");
	y.takeDamage(100);

	std::cout << "\n\nLose all energy points\n\n";
	for (int i = 0; i < 10; ++i) {
		z.beRepaired(10);
	}
	z.attack("failed");
	y.attack("failed");

	std::cout << "\n\nCpy constructor and assignement test\n\n";
	ClapTrap	cpy_construct(y);
	ClapTrap	celuila("ici");

	celuila = cpy_construct;

	celuila.attack("Mr Biasoni");

	return 0;
}

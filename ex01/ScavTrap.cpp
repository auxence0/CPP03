/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 14:53:10 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/14 12:30:31 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ): ClapTrap(name){
	hit_points_ = 100;
	energy_points_ = 50;
	attack_damage_ = 20;
	std::cout << "Constructor ScavTrap called\n";
	return ;
}

ScavTrap::ScavTrap ( const ScavTrap& obj): ClapTrap(obj){
	std::cout << "Copy constructor ScavTrap called\n";
	return ;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap called\n";
	return ;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode.\n";
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 16:05:47 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/17 17:20:13 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name_(name) {
	hit_points_ = FragTrap::hit_points_;
	energy_points_ = ScavTrap::energy_points_;
	attack_damage_ = FragTrap::attack_damage_;
	std::cout << "Constructor DiamondTrap called\n";
	return ;
}

DiamondTrap::DiamondTrap( const DiamondTrap& obj): ClapTrap(obj), ScavTrap(obj), FragTrap(obj){
	std::cout << "Copy Constructor DiamondTrap called;";
	return ;
}

DiamondTrap::~DiamondTrap () {
	std::cout << "Destructor DiamondTrap called\n";
	return ;
}

DiamondTrap&	DiamondTrap::operator= ( const DiamondTrap& rhs ) {
	
}

void	DiamondTrap::attack ( const std::string& target ) {
	ScavTrap::attack (target);
	return ;
}

void	DiamondTrap::whoAmI (void) {
	std::cout << "DiamondTrap " + name_ + "\n";
	std::cout << "ClapTrap " + ClapTrap::name_ + "\n";
	return ;
}

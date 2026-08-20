/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 16:05:47 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/20 11:15:48 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Default_clap_name"), ScavTrap("Default"), FragTrap("Default"), name_("Default") {
	hit_points_ = FragTrap::hit_points_;
	energy_points_ = def_scav_energy_points_;
	attack_damage_ = FragTrap::attack_damage_;
	std::cout << "Destructor Constructor DiamondTrap called\n";
	return ;
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name_(name) {
	hit_points_ = FragTrap::hit_points_;
	energy_points_ = def_scav_energy_points_;
	attack_damage_ = FragTrap::attack_damage_;
	std::cout << "Constructor DiamondTrap called\n";
	return ;
}

DiamondTrap::DiamondTrap( const DiamondTrap& obj): ClapTrap(obj), ScavTrap(obj), FragTrap(obj){
	*this = obj;
	std::cout << "Copy Constructor DiamondTrap called\n";
	return ;
}

DiamondTrap::~DiamondTrap () {
	std::cout << "Destructor DiamondTrap called\n";
	return ;
}

DiamondTrap&	DiamondTrap::operator= ( const DiamondTrap& rhs ) {
	ClapTrap::name_ = rhs.name_ + "_clap_name_";
	this->name_ = rhs.name_;
	this->hit_points_ = rhs.hit_points_;
	this->attack_damage_ = rhs.attack_damage_;
	this->energy_points_ = rhs.energy_points_;
	return *this;
}

void	DiamondTrap::attack ( const std::string& target ) {
	ScavTrap::attack (target);
	return ;
}

void	DiamondTrap::whoAmI (void) {
	std::cout << "DiamondTrap " << name_ << "\n";
	std::cout << "ClapTrap " << ClapTrap::name_ << "\n";
	return ;
}

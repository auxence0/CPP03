/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 14:53:10 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/20 11:16:40 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap("Default"){
	hit_points_ = 100;
	energy_points_ = 50;
	attack_damage_ = 20;
	std::cout << "Default Constructor ScavTrap called\n";
	return ;	
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(name){
	hit_points_ = 100;
	energy_points_ = 50;
	attack_damage_ = 20;
	std::cout << "Constructor ScavTrap called\n";
	return ;
}

ScavTrap::ScavTrap ( const ScavTrap& obj): ClapTrap(obj){
	std::cout << "Copy constructor ScavTrap called\n";
	*this = obj;
	return ;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap called\n";
	return ;
}

ScavTrap&	ScavTrap::operator= ( const ScavTrap& rhs ) {
	this->hit_points_ = rhs.hit_points_;
	this->attack_damage_ = rhs.attack_damage_;
	this->energy_points_ = rhs.energy_points_;
	this->name_ = rhs.name_;
	return *this;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode.\n";
	return ;
}

void	ScavTrap::attack( const std::string& target ) {
	if (hit_points_ == 0 || energy_points_ == 0) {
		if (hit_points_ == 0)
			std::cout << "(ScavTrap) " << name_ << " is dead\n";
		if (energy_points_ == 0)
			std::cout << "(ScavTrap) " << name_ << " no more energy points\n";
		return ;
	}
	std::cout << "(ScavTrap) " << name_ << " attacks " << target << ", causing " << attack_damage_ << " points of damage!\n";
	energy_points_--;
	return ;
}

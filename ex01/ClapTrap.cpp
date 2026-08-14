/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 12:06:13 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/14 12:36:35 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ): name_(name), hit_points_(10), energy_points_(10), attack_damage_(0){
	std::cout << "Constructor ClapTrap called\n";
	return ;
}

ClapTrap::ClapTrap( const ClapTrap& obj ) {
	std::cout << "Copy constructor ClapTrap called\n";
	*this = obj;
	return ;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor ClapTrap called\n";
	return ;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& rhs ) {
	this->name_ = rhs.name_;
	this->attack_damage_ = rhs.attack_damage_;
	this->energy_points_ = rhs.energy_points_;
	this->hit_points_ = rhs.hit_points_;
	return *this;
}

void	ClapTrap::attack( const std::string& target) {
	if (energy_points_ > 0) {
		std::cout << "(ClapTrap) " + name_ + " attacks " + target + ", causing " << attack_damage_ << " points of damage!\n";
		energy_points_--;
	}
	else
		std::cout << "Need energy point\n";
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	std::cout << "(ClapTrap) " + name_ + " took " << amount << " damage ";
	hit_points_ -= amount;
	if (hit_points_ < 0)
		hit_points_ = 0;
	std::cout << "He's now at " << hit_points_ << "\n";
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (energy_points_ > 0) {
		std::cout << "(ClapTrap) " + name_ + " gained " << amount << " hit points\n";
		energy_points_--;
	}
	else
		std::cout << "Need energy point\n";
	return ;
}

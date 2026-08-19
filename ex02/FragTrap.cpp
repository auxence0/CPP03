/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 14:28:08 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/19 10:56:11 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ): ClapTrap(name){
	hit_points_ = 100;
	energy_points_ = 100;
	attack_damage_ = 30;
	std::cout << "Constructor FragTrap called\n";
	return ;
}

FragTrap::FragTrap ( const FragTrap& obj): ClapTrap(obj){
	std::cout << "Copy constructor FragTrap called\n";
	return ;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor FragTrap called\n";
	return ;
}

FragTrap&	FragTrap::operator= ( const FragTrap& rhs ) {
	this->hit_points_ = rhs.hit_points_;
	this->attack_damage_ = rhs.attack_damage_;
	this->energy_points_ = rhs.energy_points_;
	this->hit_points_ = rhs.hit_points_;
	return *this;
}

void	FragTrap::highFivesGuys() {
	std::cout << "High-fives ?\n";
	return ;
}

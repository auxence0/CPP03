/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 14:28:08 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/14 14:48:45 by asauvage         ###   ########.fr       */
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

void	FragTrap::highFivesGuys() {
	std::cout << "High-fives ?\n";
	return ;
}

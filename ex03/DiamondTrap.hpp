/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 16:06:03 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/17 17:01:14 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_HPP
# define DIAMOND_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap{
	public:
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap& obj);
		~DiamondTrap();
		DiamondTrap&	operator=( const DiamondTrap& rhs );
		void	attack( const std::string& target );
		void	whoAmi();
	private:
		std::string	name_;
		int			hit_points_;
		int			energy_points_;
		int			attack_damage_;
};

#endif
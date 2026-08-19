/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 16:06:03 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/19 11:04:43 by asauvage         ###   ########.fr       */
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
		void	whoAmI();
	private:
		std::string	name_;
};

#endif
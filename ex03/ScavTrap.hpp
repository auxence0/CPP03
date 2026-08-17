/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 14:51:47 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/17 15:29:54 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap: virtual public ClapTrap {
	public:
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& obj );
		~ScavTrap();
		ScavTrap&	operator=( const ScavTrap& rhs );
		void	attack( const std::string& target );
		void	guardGate();
	private:
		
};

#endif
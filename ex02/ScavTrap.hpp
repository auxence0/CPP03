/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 14:51:47 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/14 12:26:28 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap {
	public:
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& obj );
		~ScavTrap();
		ScavTrap&	operator=( const ScavTrap& rhs );
		void	guardGate();
	private:
		
};

#endif
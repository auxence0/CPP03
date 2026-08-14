/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 11:53:17 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/14 12:28:14 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap {
	public:
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& obj );
		~ClapTrap();
		ClapTrap&	operator=( const ClapTrap& rhs );
		void		attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
	protected:
		std::string	name_;
		int			hit_points_;
		int			energy_points_;
		int			attack_damage_;
};

#endif
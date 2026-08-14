/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 16:06:03 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/14 16:28:24 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_HPP
# define DIAMOND_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	Diamond: public ScavTrap, public FragTrap{
	public:
		Diamond( std::string name );
		Diamond( const Diamond& obj);
		~Diamond();
		Diamond&	operator=( const Diamond& rhs );
		void	attack();
		void	whoAmi();
	private:
		std::string	name_;
		int			hit_points_;
		int			energy_points_;
		int			attack_damage_;
};

#endif
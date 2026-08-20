/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 14:27:50 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/20 10:53:16 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap: public ClapTrap {
	public:
		FragTrap();
		FragTrap( std::string name );
		FragTrap( const FragTrap& obj );
		~FragTrap();
		FragTrap&	operator=( const FragTrap& rhs );
		void	highFivesGuys( void );
};

#endif
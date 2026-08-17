/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 14:27:50 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/17 15:30:10 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap: virtual public ClapTrap {
	public:
		FragTrap( std::string name );
		FragTrap( const FragTrap& obj );
		~FragTrap();
		FragTrap&	operator=( const FragTrap& rhs );
		void	highFivesGuys( void );
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:49:40 by eandre            #+#    #+#             */
/*   Updated: 2024/09/12 21:12:03 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public :
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &other_DiamondTrap);
		~DiamondTrap();
		DiamondTrap	&operator=(const DiamondTrap &other_DiamondTrap);
		void		whoAmI(void);
		using ScavTrap::attack;
	private :
		DiamondTrap();
		std::string _name;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:51:21 by eandre            #+#    #+#             */
/*   Updated: 2024/09/12 14:06:39 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string const &name);
		ScavTrap(const ScavTrap &other_ScavTrap);
		~ScavTrap();
		ScavTrap	&operator=(const ScavTrap &other_ScavTrap);
		void 		attack(const std::string &target);
		void 		guardGate();
	private:
		bool	guard_Mode;
};

#endif
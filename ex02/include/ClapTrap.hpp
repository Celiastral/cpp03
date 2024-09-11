/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:00:41 by eandre            #+#    #+#             */
/*   Updated: 2024/09/11 20:56:09 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &other_ClapTrap);
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &other_ClapTrap);
		void 		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		set_Attack_damage(unsigned int Attack);
		void		set_Hit_points(unsigned int Hp);
		void		set_Energy_points(unsigned int Ep);
	protected:
		unsigned int	Hit_points;
		unsigned int	Energy_points;
		unsigned int	Attack_damage;
		std::string		name;
};

#endif

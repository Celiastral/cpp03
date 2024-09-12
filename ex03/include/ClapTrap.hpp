/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:00:41 by eandre            #+#    #+#             */
/*   Updated: 2024/09/12 21:22:35 by eandre           ###   ########.fr       */
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
		ClapTrap		&operator=(const ClapTrap &other_ClapTrap);
		void 			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			set_name(std::string &name);
		void			set_Attack_damage(unsigned int Attack);
		void			set_Hit_points(unsigned int Hp);
		void			set_Energy_points(unsigned int Ep);
		unsigned int	get_Attack_damage(void) const;
		unsigned int	get_Hit_points(void) const;
		unsigned int	get_Energy_points(void) const;
	protected:
		int				Hit_points;
		int				Energy_points;
		int				Attack_damage;
		std::string		_name;
};

#endif

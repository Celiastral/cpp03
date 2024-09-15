/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:00:48 by eandre            #+#    #+#             */
/*   Updated: 2024/09/15 18:56:49 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

int	main(void)
{
	ScavTrap	ScavTrap_("Little children");
	ScavTrap	scav(ScavTrap_);
	ClapTrap	trap("Stephane");

	scav.set_Attack_damage(1);
	scav.attack("Stephane");
	trap.takeDamage(1);
	scav.guardGate();
	scav.attack("Stephane");
	trap.set_Attack_damage(10);
	trap.set_Energy_points(1);
	trap.attack("Little children");
	scav.takeDamage(10);
	scav.beRepaired(10);
	scav.guardGate();
	scav.takeDamage(1000);
	scav.guardGate();
}
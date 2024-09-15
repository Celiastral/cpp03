/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:00:48 by eandre            #+#    #+#             */
/*   Updated: 2024/09/15 18:53:25 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ClapTrap_("Little children");
	ClapTrap	clap(ClapTrap_);
	ClapTrap	trap("Stephane");

	clap.set_Attack_damage(1);
	clap.attack("Stephane");
	trap.takeDamage(1);
	trap.set_Attack_damage(10);
	trap.set_Energy_points(1);
	trap.attack("Little children");
	clap.takeDamage(10);
	clap.beRepaired(10);
	trap.beRepaired(10);
}
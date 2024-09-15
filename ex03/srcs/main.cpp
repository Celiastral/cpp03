/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:00:48 by eandre            #+#    #+#             */
/*   Updated: 2024/09/15 19:04:55 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	DiamondTrap_("Stephane");
	DiamondTrap	DiamondTrap_Copy(DiamondTrap_);
	DiamondTrap	DiamondTrap_2("Little children");

	DiamondTrap_.set_Attack_damage(300);
	DiamondTrap_.set_Energy_points(1);
	DiamondTrap_.attack((std::string)"Little children");
	DiamondTrap_2.takeDamage(300);
	DiamondTrap_Copy.guardGate();
	DiamondTrap_Copy.guardGate();
	DiamondTrap_Copy.highFivesGuys();
	DiamondTrap_.attack((std::string)"Little children");
	DiamondTrap_2.highFivesGuys();
	DiamondTrap_.whoAmI();
	
}
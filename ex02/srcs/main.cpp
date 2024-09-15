/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:00:48 by eandre            #+#    #+#             */
/*   Updated: 2024/09/15 19:01:25 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int	main(void)
{
	FragTrap	FragTrap_("Stephane");
	FragTrap	FragTrap_Copy(FragTrap_);
	FragTrap	FragTrap_2("Little children");

	FragTrap_.set_Attack_damage(300);
	FragTrap_.set_Energy_points(1);
	FragTrap_.attack("Little children");
	FragTrap_2.takeDamage(300);
	FragTrap_Copy.highFivesGuys();
	FragTrap_.attack("Little children");
	FragTrap_2.highFivesGuys();
	
}
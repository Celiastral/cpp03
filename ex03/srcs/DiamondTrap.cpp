/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:49:44 by eandre            #+#    #+#             */
/*   Updated: 2024/09/12 21:37:21 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->ClapTrap::_name += "_clap_name";
	this->DiamondTrap::_name = "Diamond";
	std::cout << "Default DiamondTrap constructor called for " << this->ClapTrap::_name << std::endl;
	this->set_Hit_points(FragTrap().get_Hit_points());
	this->set_Energy_points(ScavTrap().get_Energy_points());
	this->set_Attack_damage(FragTrap().get_Attack_damage());
}

DiamondTrap::DiamondTrap(const std::string &name)
{
	this->ClapTrap::_name = name + "_clap_name";
	this->DiamondTrap::_name = name;
	std::cout << "DiamondTrap constructor called for " << this->DiamondTrap::_name << std::endl;
	this->set_Hit_points(FragTrap().get_Hit_points());
	this->set_Energy_points(ScavTrap().get_Energy_points());
	this->set_Attack_damage(FragTrap().get_Attack_damage());
}

DiamondTrap::DiamondTrap(const DiamondTrap &other_DiamondTrap) : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "Copy DiamondTrap constructor called for " << this->DiamondTrap::_name << std::endl;
	*this = other_DiamondTrap;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor called for DiamondTrap " << this->DiamondTrap::_name << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other_DiamondTrap)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	this->ClapTrap::_name = other_DiamondTrap.ClapTrap::_name;
	this->DiamondTrap::_name = other_DiamondTrap.DiamondTrap::_name;
	this->set_Hit_points(other_DiamondTrap.get_Hit_points());
	this->set_Energy_points(other_DiamondTrap.get_Energy_points());
	this->set_Attack_damage(other_DiamondTrap.get_Attack_damage());
	return (*this);
}

void 	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->DiamondTrap::_name << std::endl;
	std::cout << "And my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}
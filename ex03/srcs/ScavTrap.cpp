/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:51:23 by eandre            #+#    #+#             */
/*   Updated: 2024/09/12 16:02:05 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	this->guard_Mode = false;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called for " << this->_name << std::endl;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	this->guard_Mode = false;
}

ScavTrap::ScavTrap(const ScavTrap &other_ScavTrap) : ClapTrap()
{
	*this = other_ScavTrap;
	std::cout << "Copy ScavTrap constructor called for " << this->_name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called for ScavTrap " << this->_name << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other_ScavTrap)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->_name = other_ScavTrap._name;
	this->Attack_damage = other_ScavTrap.Attack_damage;
	this->Energy_points = other_ScavTrap.Energy_points;
	this->Hit_points = other_ScavTrap.Hit_points;
	this->guard_Mode = other_ScavTrap.guard_Mode;
	return (*this);
}

void 	ScavTrap::attack(const std::string &target)
{
	if (this->Energy_points <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't attack due to having 0 energy points !" << std::endl;
		return ;
	}
	if (this->Hit_points <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't attack due to being dead !" << std::endl;
		return ;
	}
	if (this->guard_Mode == true)
	{
		std::cout << "ScavTrap " << this->_name << " can't attack due to being in Gate keeper mode !" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
	this->Energy_points = this->Energy_points - 1;
}

void 	ScavTrap::guardGate()
{
	if (this->Hit_points <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't be in Gate keeper mode due to being dead !" << std::endl;
		return ;
	}
	if (this->guard_Mode == false)
	{
		std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
		this->guard_Mode = true;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " is now out of Gate keeper mode" << std::endl;
		this->guard_Mode = false;
	}
}
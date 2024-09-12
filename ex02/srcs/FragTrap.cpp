/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:33:53 by eandre            #+#    #+#             */
/*   Updated: 2024/09/12 14:03:13 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called for " << this->name << std::endl;
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other_FragTrap) : ClapTrap()
{
	*this = other_FragTrap;
	std::cout << "Copy FragTrap constructor called for " << this->name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called for FragTrap " << this->name << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other_FragTrap)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	this->name = other_FragTrap.name;
	this->Attack_damage = other_FragTrap.Attack_damage;
	this->Energy_points = other_FragTrap.Energy_points;
	this->Hit_points = other_FragTrap.Hit_points;
	return (*this);
}

void 	FragTrap::highFivesGuys(void)
{
	if (this->Hit_points <= 0)
	{
		std::cout << "FragTrap " << this->name << " can't high five due to being dead !" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->name << " wants to high five, can he ? 🥺" << std::endl;
}
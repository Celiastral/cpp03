/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:00:44 by eandre            #+#    #+#             */
/*   Updated: 2024/09/11 21:17:49 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap() : Hit_points(10), Energy_points(10), Attack_damage(0)
{
	name = "ClapTrap";
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name_) : Hit_points(10), Energy_points(10), Attack_damage(0)
{
	name = name_;
	std::cout << "ClapTrap constructor called for " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other_ClapTrap)
{
	*this = other_ClapTrap;
	std::cout << "Copy ClapTrap constructor called for " << this->name << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other_ClapTrap)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	this->name = other_ClapTrap.name;
	this->Hit_points = other_ClapTrap.Hit_points;
	this->Energy_points = other_ClapTrap.Energy_points;
	this->Attack_damage = other_ClapTrap.Attack_damage;
	return (*this);
}

void 	ClapTrap::attack(const std::string &target)
{
	if (this->Energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " can't attack due to having 0 energy points !" << std::endl;
		return ;
	}
	if (this->Hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " can't attack due to being dead !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
	this->Energy_points = this->Energy_points - 1;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hit_points <= 0)
	{
		std::cout << "STOP ATTACKING " << this->name << " HE IS ALREADY DEAD MY GOD" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " takes " << amount << " damage!" << std::endl;
	this->Hit_points = this->Hit_points - amount;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " can't repair due to having 0 energie points !" << std::endl;
		return ;
	}
	if (this->Hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " can't repair due to being dead !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " repair himself for " << amount << "HP!" << std::endl;
	this->Hit_points = this->Hit_points + amount;
	this->Energy_points = this->Energy_points - 1;
}

void	ClapTrap::set_Attack_damage(unsigned int Attack)
{
	this->Attack_damage = Attack;
}

void	ClapTrap::set_Hit_points(unsigned int Hp)
{
	this->Hit_points = Hp;
}

void	ClapTrap::set_Energy_points(unsigned int Ep)
{
	this->Energy_points = Ep;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for ClapTrap " << this->name << std::endl;
}
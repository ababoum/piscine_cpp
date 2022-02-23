/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <mababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:41:37 by mababou           #+#    #+#             */
/*   Updated: 2022/02/23 15:16:02 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
	std::cout << "\e[1;44mScavTrap \e[0m";
	std::cout << "\e[3mDefault constructor seeked\e[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "\e[1;44mScavTrap \e[0m";
	std::cout << "\e[3mName constructor seeked\e[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &)
{
	std::cout << "\e[1;44mScavTrap \e[0m";
	std::cout << "\e[3mCopy constructor seeked\e[0m" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "\e[1;44mScavTrap \e[0m";
	std::cout << "\e[3mDestructor seeked\e[0m" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const &)
{
	std::cout << "\e[1;44mScavTrap \e[0m";
	std::cout << "\e[3mAssignement operator seeked\e[0m" << std::endl;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
{
	o << i.getName();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void					ScavTrap::guardGate(void) const
{
	std::cout << "\e[1;44mScavTrap \e[0m";
	std::cout << *this << " has entered in Gate Keeper 🚪 mode" << std::endl;
}

void					ScavTrap::attack(const std::string& target)
{
	std::cout << "\e[1;44mScavTrap \e[0m";
	if (this->_hit_points == 0)
		std::cout << *this << " cannot attack with 0 hit point" << std::endl;
	else if (this->_energy_points == 0)
		std::cout << *this << " cannot attack with 0 energy point" << std::endl;
	else if (this->_attack_damage == 0)
		std::cout << *this << " cannot inflict damage with 0 attack" << std::endl;
	else
	{
		std::cout << *this << " attacks " << target << ", dealing a swooping \e[91m";
		std::cout << this->getAttackDamage() << " point";
		if (this->getAttackDamage() > 1)
			std::cout << "s";
		std::cout << " of wild damage!\e[0m" << std::endl;
		this->_energy_points--;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
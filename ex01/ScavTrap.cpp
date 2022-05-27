/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:05:54 by lmaujean          #+#    #+#             */
/*   Updated: 2022/05/26 15:05:56 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->EnergyPoint = 50;
    this->HitPoints = 100;
    this->AttackDamage = 20;

    std::cout << "defaut constructor called" << std::endl;
    setName(name);
    std::cout << name << " the ScavTrap was created with " << this->EnergyPoint << " energy points" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & rhs)
{
    std::cout << "Copy constructor " << rhs._name << " was called " << std::endl;
    *this = rhs;
}

void    ScavTrap::attack(const std::string & target)
{
    if (this->EnergyPoint > 0)
    {
        std::cout << this->getName() << " the ScavTrap attacks " << target << " and causing " << this->AttackDamage << " points of damage" << std::endl;
        this->EnergyPoint--;
    }
    else if (this->EnergyPoint == 0)
    {
        std::cout << this->getName() << " is too tired to continue fighting" << std::endl;
        this->EnergyPoint = 0;
    }
}

void    ScavTrap::guardGate()
{
    std::cout << this->getName() << " enter guard guate mode" << std::endl;
}

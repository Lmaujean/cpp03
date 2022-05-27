/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:33:05 by lmaujean          #+#    #+#             */
/*   Updated: 2022/05/26 12:33:07 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->EnergyPoint = 10;
    this->AttackDamage = 0;
    this->HitPoints = 10;

    setName(name);
    std::cout << "default constructor called" << std::endl;
    std::cout << name << " the ClapTrap was created with " << this->EnergyPoint << " energy point" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & rhs)
{
    std::cout << "Copy constructor " << rhs._name << " was called " << std::endl;
    *this = rhs;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor called" << std::endl;
}

std::string ClapTrap::getName() const
{
    return (this->_name);
}

void    ClapTrap::setName(std::string name)
{
    this->_name.assign(name);
}


void    ClapTrap::attack(const std::string& target)
{
    if (this->EnergyPoint > 0)
    {
        std::cout << this->_name << " the ClapTrap attacks " << target << " and causing " << this->AttackDamage << " points of damage" << std::endl;
        this->EnergyPoint--;
    }
    else if (this->EnergyPoint == 0)
    {
        std::cout << this->_name << " is too tired to continue fighting" << std::endl;
        this->EnergyPoint = 0;
    }
}

void    ClapTrap::beRepaired(unsigned int amout)
{
    if (this->EnergyPoint > 0)
    {
        std::cout << getName() << " repaired " << amout << " life points" << std::endl;
        this->EnergyPoint--;
    }
    else if (this->EnergyPoint == 0)
    {
        std::cout << this->_name << " is too tired to continue fighting" << std::endl;
        this->EnergyPoint = 0;
    }
}

void    ClapTrap::takeDamage(unsigned int amout)
{
    std::cout << getName() << " take " << amout << " damage points" << std::endl;
}

unsigned int    ClapTrap::getAD() const
{
    return (this->AttackDamage);
}

void    ClapTrap::setAD(unsigned int ad)
{
    this->AttackDamage = ad;
}

unsigned int    ClapTrap::getEP() const
{
    return (this->EnergyPoint);
}

void    ClapTrap::setEP(unsigned int ep)
{
    this->EnergyPoint = ep;
}

unsigned int    ClapTrap::getHP() const
{
    return (this->HitPoints);
}

void    ClapTrap::setHP(unsigned int hp)
{
    this->HitPoints = hp;
}

std::ostream & operator<<(std::ostream & out, ClapTrap const & rhs)
{
    std::cout << rhs.getName();
    return (out);
}

ClapTrap &   ClapTrap::operator=(ClapTrap const & rhs) 
{
    if (this != &rhs)
    {
        this->setName(rhs.getName());
        this->HitPoints = rhs.getHP();
        this->EnergyPoint = rhs.getEP();
        this->AttackDamage = rhs.getAD();
    }
    return *this;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:28:11 by lmaujean          #+#    #+#             */
/*   Updated: 2022/05/27 11:28:13 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
    this->HitPoints = 100;

    setName(name);
    std::cout << name << " the FragTrap was created with " << this->EnergyPoint << " energy point" << std::endl;
}

FragTrap::FragTrap(FragTrap const & rhs)
{
    std::cout << "Copy constructor " << rhs._name << " was called " << std::endl;
    *this = rhs;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void   FragTrap::attack(const std::string & target)
{
    std::cout << this->_name << " the ClapTrap attacks " << target << " and causing " << this->AttackDamage << " points of damage" << std::endl;
    this->EnergyPoint--;
    this->HitPoints -= this->AttackDamage;
    if (this->EnergyPoint == 0)
        std::cout << this->_name << " is too tired to continue fighting" << std::endl;
}

void   FragTrap::beRepaired(unsigned int amout)
{
    std::cout << getName() << " repaired " << amout << " life points" << std::endl;
    this->EnergyPoint--;
}

void   FragTrap::takeDamage(unsigned int amout)
{
    std::cout << getName() << " take " << amout << " damage points" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::string str;

    std::cout << this->_name << " Asking : Do you want to make a High Five ? : ";
    getline(std::cin, str);
    if (str == "Yes")
        std::cout << this->_name << " Hit a High Five" << std::endl;
    else if (str == "No")
        std::cout << this->_name << " gets mad and kills everyone" << std::endl;
}
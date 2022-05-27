/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:32:42 by lmaujean          #+#    #+#             */
/*   Updated: 2022/05/26 12:32:43 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "########## all constructor called ################" << std::endl;
    std::cout << std::endl;

    ScavTrap instance;
    ClapTrap instances;
    ScavTrap Jean("Jean");
    ClapTrap Jules("Jules");

    std::cout << "########## actions ################" << std::endl;
    std::cout << std::endl;

    Jean.attack("Jules");
    Jules.takeDamage(Jean.getAD());
    Jean.beRepaired(15);
    Jules.attack("Jean");
    Jean.guardGate();
    Jean.takeDamage(Jules.getAD());

    std::cout << "########## destructor called ################" << std::endl;
    std::cout << std::endl;

}
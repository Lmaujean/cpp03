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

int main()
{
    std::cout << "########## all constructor called ################" << std::endl;
    std::cout << std::endl;
    
    ClapTrap instance;
    ClapTrap clap("Jonh");
    ClapTrap copyClap(clap);
    ClapTrap spider("Peter");
    ClapTrap goubelin("goubelin");
    std::cout << std::endl;

    std::cout << "####### all actions ##############" << std::endl;
    std::cout << std::endl;
    
    clap.attack("goubelin");
    goubelin.takeDamage(clap.getAD());
    goubelin.beRepaired(5);
    spider.attack("Jonh");
    clap.takeDamage(spider.getAD());
    std::cout << std::endl;
    
    std::cout << "########### destructor was called ############" << std::endl;
    std::cout << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:32:54 by lmaujean          #+#    #+#             */
/*   Updated: 2022/05/26 12:32:56 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        unsigned int HitPoints;
        unsigned int EnergyPoint;
        unsigned int AttackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & rhs);
        ~ClapTrap();

        ClapTrap &  operator=(ClapTrap const & rhs); 
        
        void    attack(const std::string & target);
        void    takeDamage(unsigned int amout);
        void    beRepaired(unsigned int amout);

        std::string getName(void) const;
        void        setName(std::string name);
        unsigned int    getHP(void) const;
        void            setHP(unsigned int hp);
        unsigned int    getEP(void) const;
        void            setEP(unsigned int ep);
        unsigned int    getAD(void) const;
        void            setAD(unsigned int ad);
};

std::ostream & operator<<(std::ostream & out, ClapTrap const & rhs);

#endif

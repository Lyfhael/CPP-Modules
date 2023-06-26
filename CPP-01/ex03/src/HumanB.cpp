/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:56:31 by hateisse          #+#    #+#             */
/*   Updated: 2023/06/22 09:07:37 by hateisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(void) : _name(std::string("undefined")) {
	return;
}

HumanB::HumanB(const std::string name) : _name(name) {
	return;
}

HumanB::~HumanB(void) {
	return;
}

void	HumanB::set_weapon(Weapon &weapon) {
	this->_weapon = &weapon;
	return;
}

void	HumanB::Attack(void) const {
	std::cout << this->_name << " attacks with their " << this->_weapon->get_type();
	std::cout << std::endl;
	return;
}

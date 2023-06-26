/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:56:31 by hateisse          #+#    #+#             */
/*   Updated: 2023/06/22 04:30:16 by hateisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(Weapon &weapon)
	:	_name(std::string("undefined")),
		_weapon(&weapon) {
	return;
}

HumanA::HumanA(const std::string name, Weapon &weapon)
	:	_name(name),
		_weapon(&weapon) {
	return;
}

HumanA::~HumanA(void) {
	return;
}

void	HumanA::Attack(void) const {
	std::cout << this->_name << " attacks with their " << this->_weapon->get_type();
	std::cout << std::endl;
	return;
}

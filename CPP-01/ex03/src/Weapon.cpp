/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:38:55 by hateisse          #+#    #+#             */
/*   Updated: 2023/06/22 01:34:36 by hateisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(void) : _type(std::string("undefined")) {
	return;
}

Weapon::Weapon(const std::string type) : _type(type) {
	return;
}

Weapon::~Weapon(void) {
	return;
}

void	Weapon::set_type(const std::string &new_type) {
	this->_type = new_type;
	return;
}

const std::string&	Weapon::get_type(void) const {
	return this->_type;
}

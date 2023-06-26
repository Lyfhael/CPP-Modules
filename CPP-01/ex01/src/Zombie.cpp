/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:49:55 by hateisse          #+#    #+#             */
/*   Updated: 2023/06/22 04:32:00 by hateisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name) : _name(name) {
	return;
}

Zombie::Zombie(void) : _name("ZombieDefaultName") {
	return;
}

Zombie::~Zombie(void) {
	std::cout <<  "Zombie Destructor called." << std::endl;
	return;
}

void	Zombie::set_name(std::string name) {
	this->_name = name;
	return;
}

void	Zombie::Announce(void) const {
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

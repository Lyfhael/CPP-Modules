/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 09:05:19 by hateisse          #+#    #+#             */
/*   Updated: 2023/06/22 10:21:15 by hateisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>
#include <string>
#include <iostream>

Harl::Harl(void) {
	return;
}

Harl::~Harl(void) {
	return;
}

void	Harl::Debug(void) {
	std::cout << GREEN << "[DEBUG] " << ENDC << "default debug message" << std::endl;
	return;
}

void	Harl::Info(void) {
	std::cout << BLUE << "[INFO] " << ENDC << "default info message" << std::endl;
	return;
}

void	Harl::Warning(void) {
	std::cout << YELLOW << "[WARNING] " << ENDC << "default warning message" << std::endl;
	return;
}

void	Harl::Error(void) {
	std::cout << RED << "[ERROR] " << ENDC << "default error message" << std::endl;
	return;
}

void	Harl::Complain(const std::string level) {
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*log[4])(void) = {
		&Harl::Debug,
		&Harl::Info,
		&Harl::Warning,
		&Harl::Error
		};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i])
			(this->*log[i])();
	}
	return;
}

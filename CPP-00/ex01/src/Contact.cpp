/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 07:33:07 by hateisse          #+#    #+#             */
/*   Updated: 2023/06/20 11:54:54 by hateisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact(void) : _registered(false) {
	return;
}

Contact::~Contact(void) {
	return;
}

/* setters */
bool Contact::set_first_name(std::string first_name) {
	if (first_name.empty())
		return false;
	else
		this->_first_name = first_name;
	return true;
}

bool Contact::set_last_name(std::string last_name) {
	if (last_name.empty())
		return false;
	else
		this->_last_name = last_name;
	return true;
}

bool Contact::set_surname(std::string surname) {
	if (surname.empty())
		return false;
	else
		this->_surname = surname;
	return true;
}

bool Contact::set_phone_number(std::string phone_number) {
	if (phone_number.empty())
		return false;
	else
		this->_phone_number = phone_number;
	return true;
}

bool Contact::set_darkest_secret(std::string darkest_secret) {
	if (darkest_secret.empty())
		return false;
	else
		this->_darkest_secret = darkest_secret;
	return true;
}

void	Contact::register_current_slot(void) {
	this->_registered = true;
	return;
}

/* getters */
std::string	Contact::get_first_name(void) const {
	return this->_first_name;
}

std::string	Contact::get_last_name(void) const {
	return this->_last_name;
}

std::string	Contact::get_surname(void) const {
	return this->_surname;
}

std::string	Contact::get_phone_number(void) const {
	return this->_phone_number;
}

std::string	Contact::get_darkest_secret(void) const {
	return this->_darkest_secret;
}

bool	Contact::is_registered(void) const {
	return this->_registered;
}

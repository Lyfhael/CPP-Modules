/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 07:59:13 by hateisse          #+#    #+#             */
/*   Updated: 2023/06/20 11:54:49 by hateisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

PhoneBook::PhoneBook(void) : _current_slot(0), _max_slots(8) {
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

int	PhoneBook::add(void) {	
	std::string	user_input;

	std::cout << GREY << "First name: " << ENDC;
	std::getline(std::cin, user_input);
	if (!this->_contacts[_current_slot].set_first_name(user_input))
		return kEmptyFirstName;

	std::cout << GREY << "Last name: " << ENDC;
	std::getline(std::cin, user_input);
	if (!this->_contacts[_current_slot].set_last_name(user_input))
		return kEmptyLastName;

	std::cout << GREY << "Surname: " << ENDC;
	std::getline(std::cin, user_input);
	if (!this->_contacts[_current_slot].set_surname(user_input))
		return kEmptySurname;

	std::cout << GREY << "Phone number: " << ENDC;
	std::getline(std::cin, user_input);
	if (!this->_contacts[_current_slot].set_phone_number(user_input))
		return kEmptyPhoneNumber;

	std::cout << GREY << "Darkest secret: " << ENDC;
	std::getline(std::cin, user_input);
	if (!this->_contacts[_current_slot].set_darkest_secret(user_input))
		return kEmptyDarkestSecret;
	this->_contacts[_current_slot].register_current_slot();

	/* modulo operation will set _current_slot back to 0 if it goes over max_slot */
	this->_current_slot = (this->_current_slot + 1) % this->_max_slots;
	return SUCCESS;
}

std::string	formatField(std::string field) {
	if (field.length() > 10) {
		field = field.substr(0, 9) + '.';
	}
	return field;
}

std::string centerAlignStreamString(const std::string& text, int width) {
	std::stringstream	result;
	int					padding = width - text.length();
	int					left_padding = padding / 2;
	int					righ_padding = padding - left_padding;

	result << std::setw(left_padding) << "" << text << std::setw(righ_padding) << "";
	return result.str();
}

void	PhoneBook::display_contacts(void) {
	std::string	field;

	for (int i = 0; i < 8; i++) {
		if (!this->_contacts[i].is_registered())
			continue;
		field = formatField(this->_contacts[i].get_first_name());
		std::cout << centerAlignStreamString(field, 10) << "|";

		field = formatField(this->_contacts[i].get_last_name());
		std::cout << centerAlignStreamString(field, 10) << "|";

		field = formatField(this->_contacts[i].get_surname());
		std::cout << centerAlignStreamString(field, 10) << "|";

		field = formatField(this->_contacts[i].get_phone_number());
		std::cout << centerAlignStreamString(field, 10) << "|";

		field = formatField(this->_contacts[i].get_darkest_secret());
		std::cout << centerAlignStreamString(field, 10);
		std::cout << std::endl;
	}
}

void	PhoneBook::display_contact(int index) {
	if (index < 0 || index > this->_max_slots - 1) {
		throw std::invalid_argument("index out of range");
	}
	else if (this->_contacts[index].is_registered()) {
		std::cout << GREY << "First name: " << ENDC << this->_contacts[index].get_first_name() << std::endl;
		std::cout << GREY << "Last name: " << ENDC  << this->_contacts[index].get_last_name() << std::endl;
		std::cout << GREY << "Surname: " << ENDC  << this->_contacts[index].get_surname() << std::endl;
		std::cout << GREY << "Phone number: " << ENDC  << this->_contacts[index].get_phone_number() << std::endl;
		std::cout << GREY << "Darkest secret: " << ENDC  << this->_contacts[index].get_darkest_secret() << std::endl;
	}
	else {
		throw std::invalid_argument("contact not found");
	}
}

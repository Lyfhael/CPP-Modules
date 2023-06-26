/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 07:55:49 by hateisse          #+#    #+#             */
/*   Updated: 2023/06/20 09:57:34 by hateisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <stdexcept>
#include <cctype>
#include <limits>

int	string_to_int(std::string str) {
	long	result = 0;

	for (std::string::size_type i = 0; i < str.length(); i++) {
		if (!std::isdigit(str[i]))
			throw std::invalid_argument("argument must be a numerical value");
		result = (result * 10) + (str[i] - 48);
		if (result > std::numeric_limits<int>::max())
			throw std::invalid_argument("argument overflow max integer value ");
	}
	return result;
}

bool	add_cmd(PhoneBook &repertory) {
	if (repertory.add() != SUCCESS) {
		std::cout << std::endl << RED << "Error: " << ENDC << "Empty field" << std::endl;
		return false;
	}
	else
		std::cout << GREEN << "Contact saved!" << ENDC << std::endl;
	return true;
}

bool	search_cmd(PhoneBook &repertory) {
	std::string	user_input;

	repertory.display_contacts();
	std::cout << "Index of contact to search: ";
	std::getline(std::cin, user_input);
	try {
		repertory.display_contact(string_to_int(user_input));
	}
	catch (const std::invalid_argument &e){
		if (std::cin.eof())
			return false;
		std::cout << RED << "Error: " << ENDC << e.what() << std::endl;
	}
	return true;
}

int	main(void) {
	PhoneBook 	repertory;
	std::string	user_input;

	std::cout << BLUE << ".:: PhoneBook CLI ::." << ENDC << std::endl;
	while (1) {
		std::cout << YELLOW << "Enter a command: " << ENDC;
		std::getline(std::cin, user_input);
		if (user_input == "ADD" && !add_cmd(repertory))
			break;
		else if (user_input == "SEARCH" && !search_cmd(repertory))
			break;
		else if (user_input == "EXIT")
			break ;
		else if (std::cin.eof()) {
			std::cout << std::endl;
			break;
		}
	}
	return (0);
}

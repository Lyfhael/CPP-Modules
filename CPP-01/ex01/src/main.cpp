/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:05:55 by hateisse          #+#    #+#             */
/*   Updated: 2023/06/22 04:31:55 by hateisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <stdexcept>
#include <iostream>

Zombie*	zombieHorde(int n, std::string name) {
	Zombie*	z;
	
	if (n <= 0)
		throw std::invalid_argument("non-strictly positive value given to zombieHorde()");
	z = new Zombie[n];
	for (int i = 0; i < n ; i++) {
		z[i].set_name(name);
	}
	return z;
}

int	main(void) {
	Zombie*	z;
	int		n = 5;

	try {
		z = zombieHorde(n, std::string("Fred"));
	}
	catch (std::invalid_argument &e) {
		std::cout << "Error: " << e.what() << std::endl;
		return 1;
	}
	for (int i = 0; i < n; i++) {
		z[i].Announce();
	}
	delete[] z;
	return 0;
}

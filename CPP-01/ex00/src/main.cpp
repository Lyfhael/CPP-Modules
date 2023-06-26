/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:05:55 by hateisse          #+#    #+#             */
/*   Updated: 2023/06/22 04:33:23 by hateisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

void	RandomChump(std::string name);

Zombie*	NewZombie(std::string name);

int	main(void) {
	Zombie* Z2 = NewZombie("Z2");

	RandomChump("Z1");
	Z2->Announce();
	delete Z2;
	return 0;
}

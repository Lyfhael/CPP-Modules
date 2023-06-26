/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 07:24:37 by hateisse          #+#    #+#             */
/*   Updated: 2023/06/17 10:51:56 by hateisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	strtoupper(char *str)
{
	for (int i = 0; str[i] != 0; i++)
	{
		str[i] = std::toupper(str[i]);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++) {
			strtoupper(argv[i]);
			std::cout << argv[i];
		}
	}
	std::cout << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 09:51:54 by hateisse          #+#    #+#             */
/*   Updated: 2023/06/22 09:55:56 by hateisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

int	main(void){
	Harl	logger;

	logger.Complain("DEBUG");
	logger.Complain("INFO");
	logger.Complain("WARNING");
	logger.Complain("ERROR");
	return 0;
}

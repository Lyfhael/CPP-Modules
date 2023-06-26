/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:38:09 by hateisse          #+#    #+#             */
/*   Updated: 2023/06/22 01:35:10 by hateisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
	public:
		Weapon(void);
		Weapon(const std::string type);
		~Weapon(void);

		/* getters */
		const std::string&	get_type(void) const;

		/* setters */
		void	set_type(const std::string &new_type);

	private:
		std::string	_type;
};

#endif /* WEAPON_HPP */

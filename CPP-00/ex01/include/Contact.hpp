/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 04:20:18 by hateisse          #+#    #+#             */
/*   Updated: 2023/06/20 11:55:05 by hateisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
	public:
		Contact(void);
		~Contact(void);

		/* setters */
		bool	set_first_name(std::string first_name);
		bool	set_last_name(std::string last_name);
		bool	set_surname(std::string surname);
		bool	set_phone_number(std::string phone_number);
		bool	set_darkest_secret(std::string darkest_secret);
		void	register_current_slot(void);

		/* getters */
		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_surname(void) const;
		std::string	get_phone_number(void) const;
		std::string	get_darkest_secret(void) const;
		bool		is_registered(void) const;
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _surname;
		std::string _phone_number;
		std::string _darkest_secret;
		int			_registered;
};

#endif /* CONTACT_HPP */
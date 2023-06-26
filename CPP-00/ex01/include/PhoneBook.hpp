/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 04:11:37 by hateisse          #+#    #+#             */
/*   Updated: 2023/06/20 11:55:10 by hateisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define SUCCESS 0

# define GREY "\033[33;2;37m"
# define GREEN "\033[92;5;118m"
# define RED "\033[91;5;118m"
# define ENDC "\033[0m"
# define YELLOW "\033[93;5;226m"
# define BLUE "\033[94;5;118m"

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);

		/* getters */
		int	add(void);
		void	display_contacts(void);
		void	display_contact(int index);
	private:
		Contact _contacts[8];
		int		_current_slot;
		int		_max_slots;
};

enum PhoneBookError {
	kEmptyFirstName = -1,
	kEmptyLastName = -2,
	kEmptySurname = -3,
	kEmptyPhoneNumber = -4,
	kEmptyDarkestSecret = -5
};

#endif /* PHONEBOOK_HPP */

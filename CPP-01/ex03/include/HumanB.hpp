#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {
	public:
		HumanB(void);
		HumanB(const std::string name);
		~HumanB(void);

		void	Attack(void) const;

		/* setters */
		void	set_weapon(Weapon &weapon);

	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif /* HUMANB_HPP */

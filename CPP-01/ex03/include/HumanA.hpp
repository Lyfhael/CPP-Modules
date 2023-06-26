#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {
	public:
		HumanA(Weapon &weapon);
		HumanA(const std::string name, Weapon &weapon);
		~HumanA(void);

		void	Attack(void) const;

	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif /* HUMANA_HPP */

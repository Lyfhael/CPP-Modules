#ifndef HARL_HPP
# define HARL_HPP

# define GREEN "\033[92;5;118m"
# define RED "\033[91;5;118m"
# define ENDC "\033[0m"
# define YELLOW "\033[93;5;226m"
# define BLUE "\033[94;5;118m"

# include <string>

class Harl {
	public:
		Harl(void);
		~Harl(void);

		void	Complain(const std::string level);

	private:
		void	Debug(void);
		void	Info(void);
		void	Warning(void);
		void	Error(void);
};

#endif /* HARL_HPP */

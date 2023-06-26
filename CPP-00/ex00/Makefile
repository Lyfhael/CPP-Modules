# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/19 04:11:28 by hateisse          #+#    #+#              #
#    Updated: 2023/06/20 10:31:24 by hateisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

SRC		= megaphone.cpp

OBJ	= $(SRC:.cpp=.o)

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
LDFLAGS = 
RM		= rm -rf

#Colors:
GREEN		=	\033[92;5;118m
YELLOW		=	\033[93;5;226m
GRAY		=	\033[33;2;37m
RST			=	\033[0m
CURSIVE		=	\033[33;3m

all: $(NAME)

$(NAME): $(OBJ) Makefile
	@printf "$(CURSIVE)$(GRAY)- Compiling $(NAME)... $(RST)$(GREEN)Done$(RST)          \n"
	@ $(CC) $(LDFLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN)- Executable ready.\n$(RST)"

%.o: %.cpp
	@printf "$(CURSIVE)$(GRAY)- Compiling $(NAME)... $(RST)$@           \r"
	@$(CC) -c $(FLAGS) $< -o $@

clean:
	@$(RM) $(OBJ)
	@printf "$(YELLOW)- Object files removed.$(RST)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)- Executable removed.$(RST)\n"

re: fclean all

.PHONY: all clean re fclean

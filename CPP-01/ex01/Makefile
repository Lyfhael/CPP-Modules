# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hateisse <hateisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/19 04:11:34 by hateisse          #+#    #+#              #
#    Updated: 2023/06/22 00:33:25 by hateisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	brain

SRC		=	main.cpp \
			Zombie.cpp \

SRC_DIR		=	src

BUILD_DIR	=	./build

INCLUDE_DIR	=	include

OBJ		=	$(patsubst %.cpp, $(BUILD_DIR)/%.o, $(SRC))

DEP		=	$(OBJ:.o=.d)

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 -MMD
LDFLAGS	=	
RM		=	rm -rf

#Colors:
GREEN		=	\033[92;5;118m
YELLOW		=	\033[93;5;226m
GRAY		=	\033[33;2;37m
RST			=	\033[0m
CURSIVE		=	\033[33;3m
CL			=	\033[K

all: $(NAME)

$(NAME): $(OBJ) Makefile
	@printf "$(CL)$(CURSIVE)$(GRAY)- Compiling $(NAME)... $(RST)$(GREEN)Done$(RST)\n"
	@ $(CC) $(LDFLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN)- Executable ready.\n$(RST)"

-include $(DEP)

$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	@printf "$(CL)$(CURSIVE)$(GRAY)- Compiling $(NAME)... $(RST)$@\r"
	@$(CC) -c $(FLAGS) -I$(INCLUDE_DIR) $< -o $@

clean:
	@$(RM) $(OBJ)
	@printf "$(YELLOW)- Object files removed.$(RST)\n"
	@$(RM) $(DEP)
	@printf "$(YELLOW)- Dependency files removed.$(RST)\n"

fclean: clean
	@$(RM) $(BUILD_DIR)
	@printf "$(YELLOW)- Build directory removed.$(RST)\n"
	@$(RM) $(NAME)
	@printf "$(YELLOW)- Executable removed.$(RST)\n"

re: fclean all

.PHONY: all clean re fclean

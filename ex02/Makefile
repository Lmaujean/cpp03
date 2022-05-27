# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/26 12:31:20 by lmaujean          #+#    #+#              #
#    Updated: 2022/05/26 12:31:22 by lmaujean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src      := main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
inc      :=
obj      := $(src:%.cpp=%.o)
NAME     := FragTrap
CXX      := c++
CXXFLAGS := -I$(inc)
CFLAGS   := -std=c++98 -Wall -Wextra -Werror
.PHONY: all NAME
all: $(NAME)
$(NAME): $(obj)
	$(CXX) $^ $(LDFLAGS) -o $@
%.o:%.cpp
	$(CXX) $(CXXFLAGS) $(CFLAGS) -c $< -o $@
.PHONY: clean fclean re
clean:
	$(RM) $(obj)
fclean: clean
	$(RM) $(NAME)
re: fclean all

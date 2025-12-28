# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/28 12:35:08 by sfaouzi           #+#    #+#              #
#    Updated: 2025/12/28 17:43:55 by sfaouzi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = BRAIN

CXX     = c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRCS    = HumanA.cpp  HumanB.cpp  main.cpp  Weapon.cp

OBJS    = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
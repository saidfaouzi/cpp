# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfaouzi <sfaouzi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/01 16:53:51 by sfaouzi           #+#    #+#              #
#    Updated: 2026/01/03 11:26:04 by sfaouzi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =  Canonical

CXX     = c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRCS    = main.cpp Fixed.cpp

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
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mganchev <mganchev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/05 19:41:27 by mganchev          #+#    #+#              #
#    Updated: 2025/04/06 22:27:22 by mganchev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = bsp

SRCS = main.cpp \
	   Fixed.cpp \
	   Point.cpp \
	   bsp.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
		
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)	

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
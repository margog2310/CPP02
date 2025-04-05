# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mganchev <mganchev@student.42london.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/05 19:41:11 by mganchev          #+#    #+#              #
#    Updated: 2025/04/05 19:41:12 by mganchev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = fixed

SRCS = main.cpp \
	   Fixed.cpp

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
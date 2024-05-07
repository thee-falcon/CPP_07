# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omakran <omakran@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/07 20:42:08 by omakran           #+#    #+#              #
#    Updated: 2024/05/07 20:53:56 by omakran          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = Array

SRCS =  main.cpp

OBJS := $(SRCS:.cpp=.o)

CC = c++

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra

all: $(EXEC)

$(EXEC):	$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(EXEC)

%.o:	%.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re
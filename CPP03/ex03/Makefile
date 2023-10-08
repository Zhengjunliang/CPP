# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juzheng <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 16:42:16 by juzheng           #+#    #+#              #
#    Updated: 2023/10/04 16:42:18 by juzheng          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	DiamondTrap

GCC		=	c++

CFLAGS	=	-g -Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp \
			ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

RM		=	rm -f

OBJS=$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			$(GCC) $(CFLAGS) $(OBJS) -o $(NAME)

.cpp.o:
	${GCC} ${CFLAGS} -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:	all clean fclean re


# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juzheng <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 09:36:18 by juzheng           #+#    #+#              #
#    Updated: 2023/09/06 09:36:18 by juzheng          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC		=	c++

CFLAGS	=	-g -Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp Contact.cpp PhoneBook.cpp

NAME	=	phoneBook

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

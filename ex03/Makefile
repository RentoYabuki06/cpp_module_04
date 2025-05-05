# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/04 12:06:03 by ryabuki           #+#    #+#              #
#    Updated: 2025/05/05 17:35:33 by ryabuki          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = interfaceRecap
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -Wshadow
INCLUDES = -I includes

SRCS =	srcs/main.cpp \
		srcs/AMateria.cpp \
		srcs/ICharacter.cpp \
		srcs/Character.cpp \
		srcs/IMateriaSource.cpp \
		srcs/MateriaSource.cpp \
		srcs/Cure.cpp \
		srcs/Ice.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re

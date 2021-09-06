##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

SRC	=	$(SRC_DIR)main.c	\
		$(SRC_DIR)struct.c	\
		$(SRC_DIR)solver.c	\
		$(SRC_DIR)solver2.c	\


SRC_DIR = src/

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-Iinclude

LDFLAGS	=	-Llib/my

LDLIBS	=	-lmy

NAME	=	solver

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(LDLIBS)

clean:
	make -C lib/my clean
	rm -f $(OBJ)

fclean:	clean
	make -C lib/my fclean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re

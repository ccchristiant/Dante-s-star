##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

SRC	=	$(SRC_DIR)main.c	\
		$(SRC_DIR)engine.c	\
		$(SRC_DIR)stack_node.c\
		$(SRC_DIR)direction.c\
		$(SRC_DIR)neighbor.c\

SRC_DIR = src/

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-Iinclude

LDFLAGS	=	-Llib/my

LDLIBS	=	-lmy

NAME	=	generator

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

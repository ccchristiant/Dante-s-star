##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

SOLVER	=	solver

GENERATOR	= generator

NAME	=	dante

all:	$(NAME)

$(NAME):
	make -C $(GENERATOR)
	make -C $(SOLVER)

clean:
	make -C $(GENERATOR) clean
	make -C $(SOLVER) clean

fclean:	clean
	make -C $(GENERATOR) fclean
	make -C $(SOLVER) fclean

re:	fclean all

.PHONY: all clean fclean re

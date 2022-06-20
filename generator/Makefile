##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

NAME = generator

SRC = 	generator.c\
		map.c\
		move.c\

LIB =	-L ../lib/printf -lprintf -L ../lib/my -lmy

INCLUDE =	-I ../include/

DEBUG =	-g3 -Wall -Wextra -Werror

all:
	gcc -o $(NAME) $(SRC) $(INCLUDE) $(LIB)

clean:
	rm -f *~
	rm -f a.out

fclean: clean
	rm -f $(NAME)

re: fclean all

debug:
	gcc -o $(NAME) $(SRC) $(INCLUDE) $(LIB) $(DEBUG)

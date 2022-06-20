##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compile the library
##

SRC	=	sources/my_printf.c \
		sources/is_1.c \
		sources/is_2.c \
		sources/is_3.c \
		sources/my_put_adress.c \
		sources/my_put_long.c \
		sources/my_put_nbr_binary.c \
		sources/my_put_nbr_hexa_maj.c \
		sources/my_put_nbr_hexa_min.c \
		sources/my_put_nbr_octal.c \
		sources/my_put_nbr.c \
		sources/my_put_short.c \
		sources/my_put_str_none.c \
		sources/my_put_unsigned_nbr.c \
		sources/my_putchar.c \
		sources/my_putstr.c \

SRC_TEST	=	tests/test_my_printf.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	libprintf.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f sources/*.o

fclean: clean
	rm -f $(NAME)

re:	fclean all

unit_test: fclean
	gcc -o unit_test $(SRC) $(SRC_TEST) --coverage -lcriterion

run_test:	unit_test
	./unit_test

##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

all:
	@echo "Compiling the libmy"
	@make -sC lib/my
	@echo "Compiling the libprintf"
	@make -sC lib/printf
	@echo "Compiling the generator"
	@make -sC generator/
	@echo "Compiling the solver"
	@make -sC solver/

clean:
	@rm -f *~
	@rm -f a.out
	@rm -f vg*

fclean: clean
	@make fclean -sC lib/my
	@make fclean -sC lib/printf
	@make fclean -sC generator/
	@make fclean -sC solver/
	@echo "Clean success"

re: fclean all

verif:
	python -m normatrix

debug:
	@echo "Compiling the libmy"
	@make -sC lib/my
	@echo "Compiling the libprintf"
	@make -sC lib/printf
	@echo "Compiling the generator"
	@make debug -sC generator/
	@echo "Compiling the solver"
	@make debug -sC solver/

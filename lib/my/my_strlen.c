/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** counts and returns the number of characters found in the string
*/

int my_putchar(char c);

int my_strlen(char const *str)
{
    int cont = 0;
    while (*str != '\0') {
        cont += 1;
        str += 1;
    }
    return cont;
}

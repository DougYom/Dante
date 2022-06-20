/*
** EPITECH PROJECT, 2021
** putstrnone
** File description:
** put str none
*/

#include <unistd.h>

void my_putchar(char c);

void my_put_nbr_octal(int);

void my_put_str_none(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] > 127) {
            my_putchar('\\');
            my_put_nbr_octal(str[i]);
        } else {
            my_putchar(str[i]);
            i += 1;
        }
    }
}

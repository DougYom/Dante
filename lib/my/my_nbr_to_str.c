/*
** EPITECH PROJECT, 2022
** nbr to str
** File description:
** nbr to str
*/

#include <stdlib.h>

char *my_nbr_to_str(int nb)
{
    int len = 0;
    char *str;
    int tmp = nb;

    if (nb == 0)
        return "0";
    while (tmp > 0) {
        tmp /= 10;
        len++;
    }
    str = malloc(sizeof(*str) * (len + 1));
    str[len] = '\0';
    while (len--) {
        str[len] = nb % 10 + '0';
        nb /= 10;
    }
    return str;
}

/*
** EPITECH PROJECT, 2021
** my_put_adress.c
** File description:
** Put adress
*/

#include <stdlib.h>

int my_putstr(char const *str);

void my_put_nbr_hexa_min(int nbr);

void my_put_adress(long long nb)
{
    if ((void *)nb == NULL) {
        my_putstr("(nil)");
    } else {
        my_putstr("0x");
        my_put_nbr_hexa_min(nb);
    }
}

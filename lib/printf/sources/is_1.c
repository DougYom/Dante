/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** Functions is
*/

#include "../include/my_printf.h"

int isint(va_list list)
{
    my_put_nbr(va_arg(list, int));
}

int ischar(va_list list)
{
    my_putchar(va_arg(list, int));
}

int isstring(va_list list)
{
    my_putstr(va_arg(list, char *));
}

int ishexamaj(va_list list)
{
    my_put_nbr_hexa_maj(va_arg(list, int));
}

int ishexamin(va_list list)
{
    my_put_nbr_hexa_min(va_arg(list, int));
}

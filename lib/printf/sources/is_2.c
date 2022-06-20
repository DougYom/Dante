/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** Functions is
*/

#include "../include/my_printf.h"

int isoctal(va_list list)
{
    my_put_nbr_octal(va_arg(list, int));
}

int isunsigned(va_list list)
{
    my_put_unsigned_nbr(va_arg(list, int));
}

int ispercent(va_list list)
{
    my_putchar('%');
}

int isnone(va_list list)
{
    my_put_str_none(va_arg(list, char *));
}

int islong(va_list list)
{
    my_put_long(va_arg(list, long));
}

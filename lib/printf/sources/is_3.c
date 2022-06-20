/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** Functions is
*/

#include "../include/my_printf.h"

int isshort(va_list list)
{
    my_put_short(va_arg(list, int));
}

int isadress(va_list list)
{
    my_put_adress(va_arg(list, long long));
}

int isbinary(va_list list)
{
    my_put_nbr_binary(va_arg(list, int));
}

int printf_next(char *s, int i, va_list list)
{
    int (*fun[2])(va_list);

    fun['l'] = &islong;
    fun['h'] = &isshort;
    if (test_lh(s, i) == 1 && test_di(s, i) == 1)
        fun[s[++ i]](list);
    else if (test_flag(s[i + 1]) == 0)
        my_putchar('%');
    else
        test(list, s, i);
    return i;
}

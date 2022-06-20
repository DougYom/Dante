/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** my_printf
*/

#include "../include/my_printf.h"

int test(va_list list, char *str, int i)
{
    int (*fun[12])(va_list);
    fun['i'] = &isint;
    fun['d'] = &isint;
    fun['c'] = &ischar;
    fun['s'] = &isstring;
    fun['X'] = &ishexamaj;
    fun['x'] = &ishexamin;
    fun['o'] = &isoctal;
    fun['u'] = &isunsigned;
    fun['%'] = &ispercent;
    fun['S'] = &isnone;
    fun['p'] = &isadress;
    fun['b'] = &isbinary;
    fun[str[++ i]](list);
}

int test_lh(char *s, int i)
{
    int x = 0;
    i++;
    if (s[i] == 'l' || s[i] == 'h')
        x++;
    return x;
}

int test_di(char *s, int i)
{
    int x = 0;
    i++;
    if (s[i + 1] == 'd' || s[i + 1] == 'i')
        x++;
    return x;
}

int test_flag(char s)
{
    int x = 0;
    char *flags = "idcsXxouSpb%";

    for (int t = 0; flags[t] != '\0'; t++) {
        if (s == flags[t]) {
            x++;
        }
    }
    return x;
}

void my_printf(char *s, ...)
{
    va_list list;
    int (*fun[2])(va_list);

    fun['l'] = &islong;
    fun['h'] = &isshort;
    va_start(list, *s);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '%') {
            i = printf_next(s, i, list);
            i++;
        } else
            my_putchar(s[i]);
    }
}

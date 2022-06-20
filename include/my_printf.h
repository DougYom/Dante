/*
** EPITECH PROJECT, 2021
** Bsprintf.h
** File description:
** Prototypes
*/

#ifndef PRINTF_H_

    #define PRINTF_H_

    #include "./my.h"

    #include <stdarg.h>

    #include <stdio.h>

    #include <stdarg.h>

    int test(va_list list, char *str, int i);

    int test_lh(char *s, int i);

    int test_di(char *s, int i);

    int test_flag(char s);

    void my_printf(char *s, ...);

    int isint(va_list list);

    int ischar(va_list list);

    int isstring(va_list list);

    int ishexamaj(va_list list);

    int ishexamin(va_list list);

    int isoctal(va_list list);

    int isunsigned(va_list list);

    int ispercent(va_list list);

    int isnone(va_list list);

    int islong(va_list list);

    int isshort(va_list list);

    int isadress(va_list list);

    int isbinary(va_list list);

#endif

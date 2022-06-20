/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** revesres a string
*/
#include <stdlib.h>

int count(char const *str)
{
    int i = 0;

    for (i; *str != '\0'; i++) {
        str++;
    }
    return (i);
}

void reverse(char *str, char *str2)
{
    char tmp = *str;
    *str = *str2;
    *str2 = tmp;
}

char *my_revstr(char *str)
{
    int n = (count(str));

    for (int i = 0; i < n / 2; i++) {
        reverse(str + i, str + n - 1 - i);
    }
    return (str);
}

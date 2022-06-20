/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** Duplicate string
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest , char const *src);

char *my_strdup(char const *str)
{
    int len;
    char *dup;

    len = my_strlen(str) + 1;
    dup = malloc(len);
    if (dup == NULL)
        return (NULL);
    dup = my_strcpy(dup, str);
    dup[len - 1] = '\0';
    return (dup);
}

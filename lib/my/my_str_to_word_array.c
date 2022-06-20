/*
** EPITECH PROJECT, 2021
** my_str_to_word_array.c
** File description:
** split string into words
*/

#include "../../include/my.h"

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int count_space(const char *str, char c)
{
    int count = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] == c)
            count++;
    return count;
}

int len(const char *str, int i, char c)
{
    int len = 1;

    for (i; str[i] != c && str[i] != '\0'; i++)
        len++;
    return len;
}

char **my_str_to_word_array(const char *str, char c)
{
    char **tab = malloc(sizeof(char *) * (count_space(str, c) + 2));
    int j = 0;
    int y = 0;

    tab[j] = malloc(sizeof(char *) * my_strlen(str));
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            j++;
            i++;
            y = 0;
            tab[j] = malloc(sizeof(char) * len(str, i, c) + 1);
        }
        tab[j][y] = str[i];
        y++;
    }
    j++;
    tab[j] = NULL;
    return tab;
}

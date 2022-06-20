/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** sstrstr
*/

#include <stdlib.h>

int to_find_void(char *to_find)
{
    int i = 0;
    if (to_find[i] == '\0')
        return 1;
    return 0;
}

int find_str3(char *str, char *to_find, int j, int i)
{
    int okay = 1;
    while (to_find[j] != '\0') {
        if (str[(i + j)] != to_find[j])
            okay = 0;
        j += 1;
    }
    return (okay);
}

char *find_str2(char *str, char *to_find, int i, int j)
{
    int okay = 0;
    if (str[i] == to_find[0]) {
        j = 0;
        okay = find_str3(str, to_find, j, i);
        if (okay == 1)
            return (&str[i]);
    }
    i += 1;
}

char *find_str(char *str, char *to_find)
{
    int i;
    int j;
    int okay;

    i = 0;
    while (str[i] != '\0') {
        find_str2(str, to_find, i, j);
    }
    return (NULL);
}

char *my_strstr(char *str, char *to_find)
{
    if (to_find_void(to_find)) {
        return (str);
    }
    return (find_str(str, to_find));
}

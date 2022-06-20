/*
** EPITECH PROJECT, 2021
** my_find_prime_sup
** File description:
** find the first superior prime
*/

#include <unistd.h>

int my_strlen(char const *str);
char *my_strcat(char *dest , char const *src);

void my_puts(const char *str)
{
    write(1, str, my_strlen(str));
}

void display_map(char **map)
{
    for (int i = 0; map[i]; i++) {
        if (map[i + 1])
            my_puts(my_strcat(map[i], "\n"));
        else
            my_puts(map[i]);
    }
}

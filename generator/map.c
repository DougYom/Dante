/*
** EPITECH PROJECT, 2022
** B-CPE-200-TLS-2-1-dante-tom.laiolo
** File description:
** map
*/

#include "dante.h"

char **create_map(int x, int y)
{
    char **map = malloc(sizeof(char *) * y + 1);

    for (int a = 0; a < y; a++) {
        map[a] = malloc(sizeof(char) * x + 1);
        for (int b = 0; b < x; b++) {
            map[a][b] = 'X';
        }
        map[a][x + 1] = '\0';
    }
    map[y + 1] = NULL;
    return map;
}

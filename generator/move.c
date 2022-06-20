/*
** EPITECH PROJECT, 2022
** B-CPE-200-TLS-2-1-dante-tom.laiolo
** File description:
** move
*/

#include "dante.h"

void move_x(char **map, int *xy, int n, int *max)
{
    if (n == 1 && xy[0] + 1 < max[0] && (map[xy[1]][xy[0] + 1] == 0
    || map[xy[1]][xy[0] + 1] != '*') && (map[xy[1]][xy[0] + 2] == 0
    || map[xy[1]][xy[0] + 2] != '*') && (map[xy[1] + 1] == NULL
    || map[xy[1] + 1][xy[0] + 1] != '*') && (xy[1] - 1 < 0
    || map[xy[1] - 1][xy[0] + 1] != '*'))
        xy[0]++;
    if (n == 3 && xy[0] - 1 >= 0 && (map[xy[1]][xy[0] - 1] == 0
    || map[xy[1]][xy[0] - 1] != '*') && (map[xy[1]][xy[0] - 2] == 0
    || map[xy[1]][xy[0] - 2] != '*') && (map[xy[1] + 1] == NULL
    || map[xy[1] + 1][xy[0] - 1] != '*') && (xy[1] - 1 < 0
    || map[xy[1] - 1][xy[0] - 1] != '*'))
        xy[0]--;
}

void move_y(char **map, int *xy, int n, int *max)
{
    if (n == 2 && xy[1] - 1 >= 0 && (xy[1] - 1 < 0 || map[xy[1] - 1][xy[0]]
    != '*') && (xy[1] - 2 < 0 || map[xy[1] - 2][xy[0]] != '*')
    && (xy[0] + 1 > max[1] || map[xy[1] - 1] [xy[0] + 1] != '*')
    && (xy[0] - 1 < 0 || map[xy[1] - 1][xy[0] - 1] != '*'))
        xy[1]--;
    if (n == 4 && xy[1] + 1 < max[1] && (xy[1] + 1 >= max[1]
    || map[xy[1] + 1][xy[0]] != '*') && (xy[1] + 2 >= max[1]
    || map[xy[1] + 2][xy[0]] != '*') && (xy[0] + 1 > max[1]
    || map[xy[1] + 1][xy[0] + 1] != '*') && (xy[0] - 1 < 0
    || map[xy[1] + 1][xy[0] - 1] != '*'))
        xy[1]++;
}

int check_char(char **map, int *i, int *max)
{
    for (i[1] = 0; map[i[0]][i[1]]; i[1]++) {
        if (map[i[0]][i[1]] == '*' && is_blocked(map, i[1], i[0], max) != 0) {
            return 1;
        }
    }
    return 0;
}

int go_right_place(char **map, int *x, int *y, int *max)
{
    int i[2] = {0, 0};

    for (i[0] = 0; map[i[0]]; i[0]++) {
        if (check_char(map, i, max) == 1) {
            x[0] = i[1];
            y[0] = i[0];
            return 1;
        }
    }
    return 0;
}

int go_corner(char **map, int *xy, int *max, int n)
{
    while (xy[0] == max[0] - 2 && xy[1] == max[1] - 2 && (n != 1 && n != 4))
        n = rand() % 4 + 1;
    if (((xy[0] == 0 && xy[1] == 1) || (xy[0] == 1
    && xy[1] == 0)) && map[0][0] != '*') {
        xy[0] = 0;
        xy[1] = 0;
        map[xy[1]][xy[0]] = '*';
        n = rand() % 4 + 1;
    }
    if (((xy[0] == max[0] - 1 && xy[1] == max[1] - 2) || (xy[0] == max[0] - 2
    && xy[1] == max[1] - 1)) && map[max[1] - 1][max[0] - 1] != '*') {
        xy[0] = max[0] - 1;
        xy[1] = max[1] - 1;
        map[xy[1]][xy[0]] = '*';
        n = rand() % 4 + 1;
    }
    return n;
}

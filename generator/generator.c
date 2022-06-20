/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Generator
*/

#include "dante.h"

int is_blocked(char **map, int x, int y, int *max)
{
    int test = 0;

    if (x + 1 < max[0] && (map[y][x + 1] == 0 || map[y][x + 1] != '*')
    && (map[y][x + 2] == 0 || map[y][x + 2] != '*') && (map[y + 1] == NULL
    || map[y + 1][x + 1] != '*') && (y - 1 < 0 || map[y - 1][x + 1] != '*'))
        test++;
    if (x - 1 >= 0 && (map[y][x - 1] == 0 || map[y][x - 1] != '*')
    && (map[y][x - 2] == 0 || map[y][x - 2] != '*') && (map[y + 1] == NULL
    || map[y + 1][x - 1] != '*') && (y - 1 < 0 || map[y - 1][x - 1] != '*'))
        test++;
    if (y - 1 >= 0 && map[y - 1][x] != '*' && (y - 2 < 0
    || map[y - 2][x] != '*') && (x + 1 > max[0] || map[y - 1][x + 1] != '*')
    && (x - 1 < 0 || map[y - 1][x - 1] != '*'))
        test++;
    if (y + 1 < max[1] && map[y + 1][x] != '*' && (y + 2 >= max[1]
    || map[y + 2][x] != '*') && (x + 1 >= max[0] || map[y + 1][x + 1] != '*')
    && (x - 1 < 0 || map[y + 1][x - 1] != '*'))
        test++;
    return test;
}

void maze(char **map, int *xy)
{
    int n = rand() % 4 + 1;
    int max[2] = {xy[0], xy[1]};
    xy[0] = rand() % xy[0];
    xy[1] = rand() % xy[1];
    map[xy[1]][xy[0]] = '*';

    while (1) {
        go_corner(map, xy, max, n);
        move_x(map, xy, n, max);
        move_y(map, xy, n, max);
        map[xy[1]][xy[0]] = '*';
        if (is_blocked(map, xy[0], xy[1], max) == 0
        && go_right_place(map, &xy[0], &xy[1], max) == 0)
            break;
        n = rand() % 4 + 1;
    }
}

int imperfect2(char **map, int i, int j, int n)
{
    if (map[i][j] == 'X') {
        if (n == 1)
            map[i][j] = '*';
        n++;
    }
    if (n == 6)
        n = 1;
    return n;
}

void imperfect(char **map)
{
    int n = 1;

    for (int i = 0; map[i]; i++) {
        for (int j = 0; map[i][j]; j++) {
            n = imperfect2(map, i, j, n);
        }
    }
}

int main(int ac, char **av)
{
    char **map = NULL;
    int xy[2] = {0, 0};

    if (ac != 3 && ac != 4)
        return 84;
    if ((my_str_isnum(av[1]) == 1 || my_str_isnum(av[2]) == 1)
    || (atoi(av[1]) == 0 || atoi(av[2]) == 0))
        return 84;
    map = create_map(atoi(av[1]), atoi(av[2]));
    srand(time(NULL));
    xy[0] = atoi(av[1]);
    xy[1] = atoi(av[2]);
    maze(map, xy);
    if (ac == 3) {
        imperfect(map);
        display_map(map);
    } else if (ac == 4 && my_strcmp(av[3], "perfect") == 0) {
        display_map(map);
    } else
        return 84;
}

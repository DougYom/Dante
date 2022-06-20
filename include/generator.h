/*
** EPITECH PROJECT, 2022
** Include
** File description:
** Include
*/

#ifndef GENERATOR_H_

    #define GENERATOR_H_

    #include <time.h>

    void move_x(char **map, int *xy, int n, int *max);

    void move_y(char **map, int *xy, int n, int *max);

    int check_char(char **map, int *i, int *max);

    int go_right_place(char **map, int *x, int *y, int *max);

    int go_corner(char **map, int *xy, int *max, int n);

    char **create_map(int x, int y);

    int is_blocked(char **map, int x, int y, int *max);

    void maze(char **map, int *xy);

    int imperfect2(char **map, int i, int j, int n);

    void imperfect(char **map);

#endif

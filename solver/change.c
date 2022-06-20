/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Solver
*/

#include "dante.h"

void change(solver_t *solve, int x, int y)
{
    if (solve->sol[x][y] == 1)
        solve->map[x][y] = 'o';
}

void put_one(solver_t *solve, int i, int j)
{
    if (solve->map[i][j] == 'X')
        solve->maze_int[i][j] = 0;
    else
        solve->maze_int[i][j] = 1;
}

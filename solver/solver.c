/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Solver
*/

#include "dante.h"

void my_put_solution(solver_t *solve)
{
    for (int i = 0; i < solve->x_len; i++)
        for (int j = 0; j < solve->y_len; j++)
            change(solve, i, j);
    display_map(solve->map);
}

int is_not_wall(solver_t *s, int x, int y)
{
    if (x >= 0 && x < s->x_len && y >= 0 &&
    y < s->y_len && s->maze_int[x][y] == 1)
        return 0;
    return 1;
}

int s_utile(solver_t *s, int x, int y)
{
    if (x == s->x_len - 1 && y == s->y_len - 1 && s->maze_int[x][y] == 1) {
        s->sol[x][y] = 1;
        return 0;
    }
    if (is_not_wall(s, x, y) == 0) {
        if (s->sol[x][y] == 1)
            return 1;
        s->sol[x][y] = 1;
        if (s_utile(s, x + 1, y) == 0)
            return 0;
        if (s_utile(s, x, y + 1) == 0)
            return 0;
        if (s_utile(s, x - 1, y) == 0)
            return 0;
        if (s_utile(s, x, y - 1) == 0)
            return 0;
        s->sol[x][y] = 0;
        return 1;
    }
    return 1;
}

int solve_maze(solver_t *solve)
{
    if (s_utile(solve, 0, 0) == 1) {
        printf("no solution found\n");
        return 1;
    }
    my_put_solution(solve);
    return 0;
}

int main(int ac, char **args)
{
    solver_t *solve = malloc(sizeof(solver_t));

    if (ac != 2)
        return 84;
    init_solve(solve, args[1]);
    solve_maze(solve);
    return 0;
}

/*
** EPITECH PROJECT, 2022
** Include
** File description:
** Include
*/

#ifndef SOLVER_H_

    #define SOLVER_H_

    typedef struct solver_s {
        char **map;
        int **sol;
        int **maze_int;
        int x_len;
        int y_len;
    } solver_t;

    void check_map(char *map);

    void put_one(solver_t *solve, int i, int j);

    void change(solver_t *solve, int x, int y);

    char **load_file(char *filename);

    void my_lentab(solver_t *solve);

    void load_sol(solver_t *solve);

    void init_solve(solver_t *solve, char *filename);

#endif

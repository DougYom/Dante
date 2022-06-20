/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** Solver
*/

#include "dante.h"

void check_map(char *map)
{
    int status = 0;

    for (int i = 0; i < my_strlen(map); i++)
        if (map[i] != 'X' && map[i] != '*' && map[i] != '\n' && map[i] != '\0')
            status = 1;
    if (map[0] != '*' || map[my_strlen(map) - 1] != '*')
        status = 1;
    if (status == 1) {
        free(map);
        printf("no solution found\n");
        exit(0);
    }
    return;
}

char **load_file(char *filename)
{
    struct stat st;
    char *buf = NULL;
    int fd;

    if (stat(filename, &st) == -1)
        exit(84);
    buf = malloc(sizeof(char) * st.st_size);
    fd = open(filename, O_RDONLY);
    read(fd, buf, st.st_size);
    check_map(buf);
    close(fd);
    return my_str_to_word_array(buf, '\n');
}

void my_lentab(solver_t *solve)
{
    int x = 0;
    int y = 0;

    for (; solve->map[x]; x++) {
        for (; solve->map[x][y]; y++);
        solve->y_len = y;
    }
    solve->x_len = x;
}

void load_sol(solver_t *solve)
{
    my_lentab(solve);
    solve->sol = malloc(sizeof(int *) * solve->x_len);
    solve->maze_int = malloc(sizeof(int *) * solve->x_len);
    for (int i = 0; i < solve->x_len; i++) {
        solve->sol[i] = malloc(sizeof(int) * solve->y_len);
        solve->maze_int[i] = malloc(sizeof(int) * solve->y_len);
    }
    for (int i = 0; i < solve->x_len; i++)
        for (int j = 0; j < solve->y_len; j++) {
            put_one(solve, i, j);
            solve->sol[i][j] = 0;
        }
}

void init_solve(solver_t *solve, char *filename)
{
    solve->map = load_file(filename);
    solve->x_len = 0;
    solve->y_len = 0;
    load_sol(solve);
}

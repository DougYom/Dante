/*
** EPITECH PROJECT, 2021
** my_compute_square_root
** File description:
** returns the square root
*/

int my_putchar(char c);

int my_compute_square_root(int nb)
{
    if (nb < 0) {
        return (0);
    }
    for (int i = 0; i <= nb; i++) {
        if (i * i == nb) {
            return (i);
        }
    }
    return (0);
}

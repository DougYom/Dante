/*
** EPITECH PROJECT, 2021
** my_compute_power_rec
** File description:
** make power buy recursive function
*/

int my_putchar(char c);

int my_compute_power_rec(int nb, int p)
{
    int n;

    if (p < 0) {
        return (0);
    }
    if (p == 0) {
        return (1);
    } else {
        n = my_compute_power_rec(nb, p - 1) * nb;
        if (p < 0 || n < 0) {
            return (0);
        } else {
            return (n);
        }
    }
}

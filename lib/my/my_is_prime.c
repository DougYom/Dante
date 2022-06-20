/*
** EPITECH PROJECT, 2021
** my_is_prime
** File description:
** return 1 for prime number and 0 if not
*/

int my_putchar(char c);

int my_is_prime(int nb)
{
    if (nb < 2) {
        return (0);
    }
    for (int i = 2; i < (nb / 2); i++) {
        if (nb % i == 0) {
            return (0);
        }
    }
    return (1);
}

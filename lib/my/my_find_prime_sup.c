/*
** EPITECH PROJECT, 2021
** my_find_prime_sup
** File description:
** find the first superior prime
*/

int my_putchar(char c);

int is_prime(int nb)
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

int my_find_prime_sup(int nb)
{
    int prime_sup = 0;
    int prime_fond = 0;

    if (is_prime(nb) == 1 ) {
        prime_fond = 1;
        prime_sup = nb;
    } else {
        for (int i = nb + 1; prime_fond != 0; i++) {
            prime_fond = is_prime(i);
            prime_sup = i;
        }
    }
    return (prime_sup);
}

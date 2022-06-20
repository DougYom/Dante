/*
** EPITECH PROJECT, 2021
** my_put_nbr_hexa
** File description:
** put a octal hexadecimal
*/

void my_putchar(char c);

void my_put_nbr_hexa(int nbr)
{
    int nbr2;
    if (nbr < 0) {
        my_putchar('-');
        nbr = nbr * (-1);
    }
    if (nbr >= 16) {
        nbr2 = nbr % 16;
        nbr = nbr / 16;
        if (nbr2 >= 10) {
            my_put_nbr_hexa(nbr);
            my_putchar(nbr2 + 48 + 7);
        } else {
            my_put_nbr_hexa(nbr);
            my_putchar(nbr2 + 48);
        }
    } else if (nbr >= 10)
        my_putchar(nbr + 48 + 7);
    else
        my_putchar(nbr + 48);
}

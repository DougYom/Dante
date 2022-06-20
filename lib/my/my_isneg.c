/*
** EPITECH PROJECT, 2021
** my_isneg
** File description:
** displays N if is negative or P if is positive or null
*/

int my_putchar(int c);

int my_isneg(int n)
{
    int lettre;
    if (n < 0) {
        lettre = 78;
    } else {
        lettre = 80;
    }
    my_putchar(lettre);
}

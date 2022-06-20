/*
** EPITECH PROJECT, 2021
** my_swap
** File description:
** swap two numbers
*/

int my_putchar(char c);

void my_swap(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

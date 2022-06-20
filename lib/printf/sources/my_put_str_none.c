/*
** EPITECH PROJECT, 2021
** putstrnone
** File description:
** put str none
*/

void my_putchar(char c);

void my_put_nbr_octal(int nbr);

void converse(char c)
{
    if (c >= 64)
        my_put_nbr_octal(c);
    if (c <= 64 && c >= 7) {
        my_putchar('0');
        my_put_nbr_octal(c);
    }
    if (c <= 7) {
        my_putchar('0');
        my_putchar('0');
        my_put_nbr_octal(c);
    }

}

void my_put_str_none(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] > 127) {
            my_putchar('\\');
            converse(str[i]);
        } else {
            my_putchar(str[i]);
        }
        i++;
    }
}

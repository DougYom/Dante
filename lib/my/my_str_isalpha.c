/*
** EPITECH PROJECT, 2021
** str_isalpha
** File description:
** str_is_alpha
*/

int my_str_isalpha(char const *str)
{
    int i = 0;
    int alpha = 1;

    while (str[i] != '\0') {
        if (str[i] < 65 && str[i] > 90 && str[i] < 97 && str[i] > 122)
            alpha = 0;
        i++;
    }
    return (alpha);
}

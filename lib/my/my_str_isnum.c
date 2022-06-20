/*
** EPITECH PROJECT, 2021
** str_isnum
** File description:
** str_isnum
*/

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] < 48 || str[i] > 57) {
            return 1;
        }
    }
    return 0;
}

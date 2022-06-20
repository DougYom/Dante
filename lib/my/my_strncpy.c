/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** copies n characters
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    return dest;
}

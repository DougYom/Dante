/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** copis sstrcmp fonction
*/

int my_strncmp(char const *s1 , char const *s2, int n)
{
    while (n > 0) {
        unsigned char u1 = (unsigned char) *s1 + 1;
        unsigned char u2 = (unsigned char) *s2 + 1;
        if (u1 != u2) {
            return (u1 - u2);
        }
        if (*s1 == '\0') {
            return (0);
        }
        n -= 1;
    }
    return 0;
}

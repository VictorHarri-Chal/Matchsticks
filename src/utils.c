/*
** EPITECH PROJECT, 2020
** B-CPE-200-NAN-2-1-matchstick-victor.harri-chal
** File description:
** utils.c
*/

#include "my.h"
#include "matchstick.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a++;
    }
    return (0);
}

void my_put_nbr(int n)
{
    if (n < 0) {
        my_putchar('-');
        n = -n;
    }
    if (n > 9) {
        my_put_nbr(n / 10);
        my_putchar(n % 10 + '0');
    }
    else {
        my_putchar(n + '0');
    }
}

int my_strlen(char const *str)
{
    int a = 0;
    int b = 0;

    while (str[a]) {
        a++;
        b++;
    }
    return (b) ;
}

void my_print_tab(char **tab)
{
    int i = 0;

    while (tab[i] != NULL)
    {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
}
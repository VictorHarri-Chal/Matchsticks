/*
** EPITECH PROJECT, 2020
** B-CPE-200-NAN-2-1-matchstick-victor.harri-chal
** File description:
** utils_bis.c
*/

#include "my.h"
#include "matchstick.h"

int if_neg(char const *str, int *nb)
{
    int i = 0;
    int sign = 0;

    while ((str[i] != '\0' && str[i] == '-') || str[i] == '+')
    {
        if (str[i] == '-')
            sign = sign + 1;
        i++;
    }
    if (sign % 2 != 0)
        *nb = *nb * (-1);
    return (0);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
            nb = nb + (str[i] - 48);
            i++;
        }
        else if (str[i] == '-' || str[i] == '+')
            i++;
        if ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != '+')
            break;
    }
    if (nb > 2147483647)
        return (0);
    if_neg(str, &nb);
    return (nb);
}

int check_if_nbr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            return (ERROR);
        i++;
    }
    return (TRUE);
}
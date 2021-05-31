/*
** EPITECH PROJECT, 2020
** B-CPE-200-NAN-2-1-matchstick-victor.harri-chal
** File description:
** check_param.c
*/

#include "my.h"
#include "matchstick.h"

int check_param(int ac, char **av)
{
    int size;
    int pick_lim;

    if (ac != 3)
        return (ERROR);
    size = my_getnbr(av[1]);
    pick_lim = my_getnbr(av[2]);
    if (size < 2 || size > 99 || pick_lim < 1)
        return (ERROR);
    return (TRUE);
}
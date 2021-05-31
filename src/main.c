/*
** EPITECH PROJECT, 2020
** B-CPE-200-NAN-2-1-matchstick-victor.harri-chal
** File description:
** main.c
*/

#include "my.h"
#include "matchstick.h"

int main(int ac, char **av)
{
    if (check_param(ac, av) == ERROR)
        return (ERROR);
    return (matchstick(av));
}
/*
** EPITECH PROJECT, 2020
** B-CPE-200-NAN-2-1-matchstick-victor.harri-chal
** File description:
** matchstick.c
*/

#include "my.h"
#include "matchstick.h"

int matchstick(char **av)
{
    all_t *all = init_struct(av);

    if (all == NULL)
        return (ERROR);
    return (game_loop(all));
}
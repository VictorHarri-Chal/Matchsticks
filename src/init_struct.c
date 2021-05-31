/*
** EPITECH PROJECT, 2020
** B-CPE-200-NAN-2-1-matchstick-victor.harri-chal
** File description:
** init_struct.c
*/

#include "my.h"
#include "matchstick.h"

all_t *init_board(all_t *all)
{
    int i = 0;

    while (i < all->size) {
        all->tab[i] = malloc(sizeof(char) * ((2 * all->size) + 1));
        if (all->tab[i] == NULL)
            return (NULL);
        i++;
    }
    return (all);
}

all_t *init_struct(char **av)
{
    all_t *all = malloc(sizeof(*all));

    if (!all)
        return (NULL);
    all->size = my_getnbr(av[1]);
    all->pick_lim = my_getnbr(av[2]);
    all->tab = malloc(sizeof(char *) * all->size);
    if (!all->tab)
        return (NULL);
    all = init_board(all);
    return (all);
}
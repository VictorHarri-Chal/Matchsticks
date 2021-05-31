/*
** EPITECH PROJECT, 2020
** B-CPE-200-NAN-2-1-matchstick-victor.harri-chal
** File description:
** count_pipes.c
*/

#include "my.h"
#include "matchstick.h"

int count_pipes(all_t *all)
{
    int nb_pipes = 0;
    int i = 0;
    int j = 0;

    while (i < all->size) {
        j = 0;
        while (all->tab[i][j]) {
            if (all->tab[i][j] == '|')
                nb_pipes++;
            j++;
        }
        i++;
    }
    return (nb_pipes);
}

int count_pipes_on_line(all_t *all)
{
    int len = 0;

    for (int i = 0; all->tab[all->line - 1][i]; i++)
        if (all->tab[all->line - 1][i] == '|')
            len++;
    return (len);
}
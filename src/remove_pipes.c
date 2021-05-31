/*
** EPITECH PROJECT, 2020
** B-CPE-200-NAN-2-1-matchstick-victor.harri-chal
** File description:
** remove_pipes.c
*/

#include "my.h"
#include "matchstick.h"

void remove_pipes(all_t *all, int line, int nb_pipes)
{
    int i;

    line--;
    for (i = my_strlen(all->tab[line]); i >= 0; i--) {
        if (all->tab[line][i] == '|' && nb_pipes != 0) {
            all->tab[line][i] = ' ';
            nb_pipes--;
        }
    }
}
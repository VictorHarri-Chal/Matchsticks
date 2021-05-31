/*
** EPITECH PROJECT, 2020
** B-CPE-200-NAN-2-1-matchstick-victor.harri-chal
** File description:
** print_game_board.c
*/

#include "my.h"
#include "matchstick.h"

void fill_game_board(all_t *all)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < all->size; i++) {
        for (j = 0; j < (2 * (all->size)); j++) {
            if (j <= all->size - 2 - i || \
            j >= (2 * all->size) - all->size + 1 + i - 1)
                all->tab[i][j] = ' ';
            else
                all->tab[i][j] = '|';
        }
        all->tab[i][j - 1] = '\0';
    }
}

void print_game_board(all_t *all)
{
    int i = 0;

    for (i = 0; i < (my_strlen(all->tab[0]) + 2); i++)
        my_putchar('*');
    my_putchar('\n');
    for (i = 0; i < all->size; i++) {
        my_putchar('*');
        my_putstr(all->tab[i]);
        my_putchar('*');
        my_putchar('\n');
    }
    for (i = 0; i < (my_strlen(all->tab[0]) + 2); i++)
        my_putchar('*');
    my_putchar('\n');
}
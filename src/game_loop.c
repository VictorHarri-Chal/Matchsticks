/*
** EPITECH PROJECT, 2020
** B-CPE-200-NAN-2-1-matchstick-victor.harri-chal
** File description:
** game_loop.c
*/

#include "my.h"
#include "matchstick.h"

int game_loop(all_t *all)
{
    fill_game_board(all);
    print_game_board(all);
    for (int turn = 0; turn < 900; turn++) {
        if (init_display(all) == ERROR)
            return (TRUE);
        if (count_pipes(all) == 0) {
            my_putstr("You lost, too bad...\n");
            return (IA_WIN);
        }
        ai(all);
        if (count_pipes(all) == 0) {
            my_putstr("I lost... snif... but I'll get you next time!!\n");
            return (PL_WIN);
        }
    }
    free(all->tab);
    free(all);
    return (TRUE);
}
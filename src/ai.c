/*
** EPITECH PROJECT, 2020
** B-CPE-200-NAN-2-1-matchstick-victor.harri-chal
** File description:
** ai.c
*/

#include "my.h"
#include "matchstick.h"

void ai(all_t *all)
{
    my_putchar('\n');
    my_putstr("AI's turn...\n");
    all->line = random()/1000000;
    while (check_line_bot(all) == ERROR) {
        all->line = random()/1000000;
    }
    all->matches = random()/1000000;
    while (check_matches_bot(all) == ERROR) {
        all->matches = random()/1000000;
    }
    my_putstr("AI removed ");
    my_put_nbr(all->matches);
    my_putstr(" match(es) from line ");
    my_put_nbr(all->line);
    my_putchar('\n');
    remove_pipes(all, all->line, all->matches);
    print_game_board(all);
}

int check_line_bot(all_t *all)
{
    if (all->line < 0) {
        return (ERROR);
    }
    if (all->line == 0 || all->line > all->size) {
        return (ERROR);
    }
    if (count_pipes_on_line(all) == 0) {
        return (ERROR);
    }
    return (TRUE);
}

int check_matches_bot(all_t *all)
{
    if (all->matches < 0) {
        return (ERROR);
    }
    if (all->matches == 0) {
        return (ERROR);
    }
    if (all->matches > all->pick_lim) {
        return (ERROR);
    }
    if (all->matches > count_pipes_on_line(all)) {
        return (ERROR);
    }
    return (TRUE);
}


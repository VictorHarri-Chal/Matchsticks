/*
** EPITECH PROJECT, 2020
** B-CPE-200-NAN-2-1-matchstick-victor.harri-chal
** File description:
** check_player_input.c
*/

#include "matchstick.h"
#include "my.h"

int check_line(all_t *all)
{
    if (all->line < 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (ERROR);
    }
    if (all->line == 0 || all->line > all->size) {
        my_putstr("Error: this line is out of range\n");
        return (ERROR);
    }
    if (count_pipes_on_line(all) == 0) {
        my_putstr("Error: this line is empty\n");
        return (ERROR);
    }
    return (TRUE);
}

int check_matches(all_t *all)
{
    if (all->matches < 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (ERROR);
    }
    if (all->matches == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (ERROR);
    }
    if (all->matches > all->pick_lim) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(all->pick_lim);
        my_putstr(" matches per turn\n");
        return (ERROR);
    }
    if (all->matches > count_pipes_on_line(all)) {
        my_putstr("Error: not enough matches on this line\n");
        return (ERROR);
    }
    return (0);
}
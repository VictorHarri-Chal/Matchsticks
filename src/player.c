/*
** EPITECH PROJECT, 2020
** B-CPE-200-NAN-2-1-matchstick-victor.harri-chal
** File description:
** player.c
*/

#include "my.h"
#include "matchstick.h"

int init_display(all_t *all)
{
    my_putchar('\n');
    my_putstr("Your turn: \n");
    return (player_turn_line(all));
}

int player_turn_line(all_t *all)
{
    char *temp_line;

    my_putstr("Line: ");
    temp_line = player_input();
    if (temp_line == NULL)
        return (ERROR);
    all->line = my_getnbr(temp_line);
    while (check_line(all) == ERROR) {
        my_putstr("Line: ");
        temp_line = player_input();
        if (temp_line == NULL)
            return (ERROR);
        all->line = my_getnbr(temp_line);
    }
    return (player_turn_matches(all));
}

int player_turn_matches(all_t *all)
{
    char *temp_matches;

    my_putstr("Matches: ");
    temp_matches = player_input();
    if (temp_matches == NULL)
        return (ERROR);
    all->matches = my_getnbr(temp_matches);
    if (check_matches(all) == ERROR) {
        player_turn_line(all);
    }
    display(all);
    return (TRUE);
}

void display(all_t *all)
{
    my_putstr("Player removed ");
    my_put_nbr(all->matches);
    my_putstr(" match(es) from line ");
    my_put_nbr(all->line);
    my_putchar('\n');
    remove_pipes(all, all->line, all->matches);
    print_game_board(all);
}

char *player_input(void)
{
    size_t size = 100;
    char *buffer = malloc(size);
    int nb = 0;

    nb = getline(&buffer, &size, stdin);
    if (nb <= 0)
        return (NULL);
    buffer[nb - 1] = '\0';
    if (check_if_nbr(buffer) == ERROR)
        return ("-1");
    return (buffer);
}
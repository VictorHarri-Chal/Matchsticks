/*
** EPITECH PROJECT, 2020
** B-CPE-200-NAN-2-1-matchstick-victor.harri-chal
** File description:
** matchstick.h
*/

#ifndef _MATCHSTICK_H_
#define _MATCHSTICK_H_

#include "my.h"

typedef enum state
{
    TRUE,
    PL_WIN = 1,
    IA_WIN = 2,
    ERROR = 84,
} state_t;

typedef struct all
{
    char **tab;
    int size;
    int pick_lim;
    int line;
    int matches;
} all_t;

//ai
void ai(all_t *all);
int check_line_bot(all_t *all);
int check_matches_bot(all_t *all);

//check_param
int check_param(int ac, char **av);

//check_player_input
int check_line(all_t *all);
int check_matches(all_t *all);

//count_pipes
int count_pipes(all_t *all);
int count_pipes_on_line(all_t *all);

//game_loop
int game_loop(all_t *all);

//init_struct
all_t *init_board(all_t *all);
all_t *init_struct(char **av);

//matchstick
int matchstick(char **av);

//player
int init_display(all_t *all);
int player_turn_line(all_t *all);
int player_turn_matches(all_t *all);
char *player_input(void);
void display(all_t *all);

//print_game_board
void fill_game_board(all_t *all);
void print_game_board(all_t *all);

//remove_pipes
void remove_pipes(all_t *all, int line, int nb_pipes);

//utils_bis
int check_if_nbr(char *str);

#endif
/*
** EPITECH PROJECT, 2020
** B-CPE-200-NAN-2-1-matchstick-victor.harri-chal
** File description:
** my.h
*/

#ifndef _MY_H_
#define _MY_H_

#include "matchstick.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <time.h>

void my_putchar(char c);
int my_putstr(char const *str);
void my_put_nbr(int n);
int my_strlen(char const *str);
void my_print_tab(char **tab);
int my_getnbr(char const *str);
int if_neg(char const *str, int *nb);

#endif
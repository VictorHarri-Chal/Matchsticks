##
## EPITECH PROJECT, 2020
## B-CPE-200-NAN-2-1-matchstick-victor.harri-chal
## File description:
## Makefile
##

SRC 		=	src/main.c 						\
				src/matchstick.c 				\
				src/check_param.c 				\
				src/init_struct.c 				\
				src/game_loop.c 				\
				src/print_game_board.c 			\
				src/count_pipes.c 				\
				src/remove_pipes.c				\
				src/player.c 					\
				src/check_player_input.c 		\
				src/ai.c 						\
				src/utils.c						\
				src/utils_bis.c

NAME	=	matchstick

CFLAGS	+=	-Wall -Wextra -Werror -Wshadow -I./include/

OBJ	=		$(SRC:.c=.o)

all:		$(NAME)

$(NAME):		$(OBJ)
				gcc -o $(NAME) $(OBJ) $(CFLAGS)
				rm -f $(OBJ)

clean:
				rm -f $(OBJ)

fclean:	clean
				rm -f $(NAME)

dbg:		CFLAGS += -g
dbg: re

re:			fclean all

.PHONY:	all	clean	fclean re

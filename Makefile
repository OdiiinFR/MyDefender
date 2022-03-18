##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	sources/main/main.c	\
		sources/my/my_putstr.c	\
		sources/my/my_itoa.c	\
		sources/defender/defender.c	\
		sources/defender/set_defend.c	\
		sources/defender/errors/usage.c	\
		sources/defender/game/game.c	\
		sources/defender/game/settings.c	\
		sources/defender/game/map_selected.c	\
		sources/defender/game/print_map.c	\
		sources/defender/game/pause.c	\
		sources/defender/tower/print_tower.c	\
		sources/defender/events/event_handling.c	\
		sources/defender/button/buttons.c	\
		sources/defender/music/music.c	\
		sources/defender/game/settings2.c	\
		sources/defender/score/score.c	\
		sources/defender/score/score2.c	\
		sources/defender/button/buttons2.c	\
		sources/defender/HUD/play.c	\
		sources/defender/HUD/do_hud.c	\
		sources/defender/HUD/do_hud2.c	\
		sources/defender/HUD/print_circle/circle_map1.c	\
		sources/defender/HUD/print_circle/circle_map2.c	\
		sources/defender/HUD/print_circle/circle_map3.c	\
		sources/defender/HUD/print_circle/circle_map4.c	\
		sources/defender/HUD/print_circle/print_circle.c	\
		sources/defender/events/key_choice.c	\
		sources/defender/events/switch.c	\
		sources/defender/events/frame.c	\
		sources/defender/tower/tower.c	\
		sources/defender/tower/detect_map/touchable.c	\
		sources/defender/tower/detect_map/detect_map1.c	\
		sources/defender/tower/detect_map/detect_map2.c	\
		sources/defender/tower/detect_map/detect_map3.c	\
		sources/defender/tower/detect_map/detect_map4.c	\
		sources/defender/tower/in_circle.c	\
		sources/defender/tower/in_circle1.c	\
		sources/defender/tower/in_circle2.c	\
		sources/defender/tower/in_circle3.c	\
		sources/defender/game/game2.c	\
		sources/defender/errors/howtoplay.c	\
		sources/defender/ennemy/ennemy.c	\
		sources/defender/buy/buy.c	\
		sources/defender/game/setgame.c	\
		sources/defender/events/drop.c	\
		sources/defender/waves/wave.c	\
		sources/defender/events/drag.c	\
		sources/defender/drop/map0/drop_map0_1.c	\
		sources/defender/drop/map0/drop_map0_2.c	\
		sources/defender/drop/map0/drop_map0_3.c	\
		sources/defender/drop/map0/drop_map0_4.c	\
		sources/defender/drop/map1/drop_map1_1.c	\
		sources/defender/drop/map1/drop_map1_2.c	\
		sources/defender/drop/map1/drop_map1_3.c	\
		sources/defender/drop/map1/drop_map1_4.c	\
		sources/defender/drop/map2/drop_map2_1.c	\
		sources/defender/drop/map2/drop_map2_2.c	\
		sources/defender/drop/map2/drop_map2_3.c	\
		sources/defender/drop/map2/drop_map2_4.c	\
		sources/defender/drop/map3/drop_map3_1.c	\
		sources/defender/drop/map3/drop_map3_2.c	\
		sources/defender/drop/map3/drop_map3_3.c	\
		sources/defender/drop/map3/drop_map3_4.c	\
		sources/defender/ennemy/new_vs.c	\
		sources/defender/ennemy/mooveit.c	\
		sources/defender/ennemy/moooove.c	\
		sources/defender/ennemy/mooving.c	\
		sources/defender/ennemy/new2.c	\
		sources/defender/ennemy/new3.c	\
		sources/defender/ennemy/new4.c	\
		sources/defender/tower/upgrade.c	\
		sources/defender/tower/up2.c	\
		sources/defender/tower/shoot.c	\
		sources/defender/ennemy/en2.c	\
		sources/defender/tower/shoot2.c	\
		sources/defender/tower/shoot3.c	\
		sources/defender/def2.c	\
		sources/defender/anim/anim.c	\
		sources/defender/ennemy/vers.c	\
		sources/defender/ennemy/en3.c	\
		sources/my/my_getnbr.c	\
		sources/defender/tower/find_top.c	\
		sources/defender/waves/file.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Iincludes -lcsfml-system -lcsfml-audio -lm

NAME	=	my_defender

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) $(CFLAGS) -g3 -lcsfml-graphics -lcsfml-window

clean:
	rm -f $(OBJ)
	rm -f includes/*.gch

fclean: clean
	rm -f *~
	rm -f *'#'
	rm -f $(NAME)
	rm -f *vgcore.*

re:	fclean all

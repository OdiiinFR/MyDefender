/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** defender
*/

#include "defender.h"

int set_up(char *file)
{
    defender_t defend = set_defend(file);
    char nam[13] = "my_defender\0";
    sfVideoMode mode = {1920, 1080, 32};
    sfVector2i pos = {0, 0};

    defend.window = sfRenderWindow_create(mode, nam, sfClose, NULL);
    sfRenderWindow_setPosition(defend.window, pos);
    sfRenderWindow_setFramerateLimit(defend.window, 60);
    sfMusic_play(defend.sound.menu);
    while (sfRenderWindow_isOpen(defend.window)) {
        do_game(&defend);
        check_zic(&defend);
    }
    sfRenderWindow_destroy(defend.window);
    sfMusic_stop(defend.sound.in_game);
    sfMusic_stop(defend.sound.menu);
    sfMusic_destroy(defend.sound.in_game);
    sfMusic_destroy(defend.sound.menu);
    return 0;
}

defender_t set_defend(char *str)
{
    defender_t new;
    sfVector2f pos1 = {665, 686};
    sfVector2f pos2 = {665, 885};

    sfRenderWindow *wind;
    new.window = wind;
    new.inv = set_inv();
    new.params = set_params();
    new.fen = 8;
    new.mouse = 0;
    new.sound = set_zic();
    new.fen_size = 169;
    new.map = 0;
    new.framerate = 60;
    new.slid1 = pos1;
    new.slid2 = pos2;
    new.hud = 0;
    new.money = 100;
    return set_part2(new, str);
}

inventary_t set_inv(void)
{
    inventary_t new;

    new.qty1 = 0;
    new.qty2 = 0;
    new.qty3 = 0;
    new.qty4 = 0;
    return new;
}

params_t set_params(void)
{
    params_t new;

    new.buy = malloc(sizeof(char) * 2);
    new.buy[0] = 77;
    new.buy[1] = '\0';
    new.inv = malloc(sizeof(char) * 2);
    new.inv[0] = 73;
    new.inv[1] = '\0';
    new.key = 0;
    new.key_buy = sfKeyM;
    new.key_inv = sfKeyI;
    return new;
}

void check_map(defender_t *defend, button_t button)
{
    find_map(defend, &button);
    choose(defend, &button);
    btn_update(&button, defend);
    print_btn(defend, button);
    return;
}

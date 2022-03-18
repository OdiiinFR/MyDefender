/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** play
*/

#include "defender.h"

void do_play(defender_t *defend)
{
    sfClock *clock;
    sfTime timer;
    float seconds;

    clock = sfClock_create();
    timer = sfClock_getElapsedTime(clock);
    seconds = timer.microseconds / 1000000.0;
    while (seconds < 0.07) {
        timer = sfClock_getElapsedTime(clock);
        seconds = timer.microseconds / 1000000.0;
    }
    defend->ctr += 1;
    add_ctr(defend);
    sfClock_destroy(clock);
    do_map(defend);
    do_ennemy(defend);
    do_hud(defend);
    buy_syst(defend);
    do_drop(defend);
    return touchable(defend);
}

void print_text_inv(defender_t *defend, sfVector2f scale)
{
    char nb1[2] = {defend->inv.qty1 + 48, '\0'};
    char nb2[2] = {defend->inv.qty2 + 48, '\0'};
    char nb3[2] = {defend->inv.qty3 + 48, '\0'};
    char nb4[2] = {defend->inv.qty4 + 48, '\0'};
    char str[9] = "Money :\0";
    sfVector2f pos1 = {580, 970};
    sfVector2f pos2 = {710, 970};
    sfVector2f pos3 = {1120, 970};
    sfVector2f pos4 = {1280, 970};
    sfVector2f pos5 = {880, 970};
    sfVector2f pos6 = {860, 930};

    print_text(defend, pos1, nb1, scale);
    print_text(defend, pos2, nb2, scale);
    print_text(defend, pos3, nb3, scale);
    print_text(defend, pos4, nb4, scale);
    print_text(defend, pos5, my_itoa(defend->money), scale);
    print_text(defend, pos6, str, scale);
}

void print_inv_hud(defender_t *defend)
{
    sfVector2f post = {830, 880};
    sfVector2f scale = {1.3, 1.3};

    draw_tower_range(defend);
    print_sprite(defend, 450, 860, "images/hud_inv.png");
    print_sprite(defend, 550, 900, "images/inv_tower1.png");
    print_sprite(defend, 700, 900, "images/inv_tower2.png");
    print_sprite(defend, 1120, 910, "images/inv_tower3.png");
    print_sprite(defend, 1270, 920, "images/inv_tower4.png");
    print_text_inv(defend, scale);
    print_text(defend, post, "Inventory\0", scale);
}

void print_text_buy(defender_t *defend, sfVector2f scale)
{
    sfVector2f pos1 = {1790, 170};
    sfVector2f pos2 = {1790, 330};
    sfVector2f pos3 = {1790, 520};
    sfVector2f pos4 = {1790, 700};
    char *nb1 = my_itoa(100 * defend->tree.buy_mod);
    char *nb2 = my_itoa(200 * defend->tree.buy_mod);
    char *nb3 = my_itoa(300 * defend->tree.buy_mod);
    char *nb4 = my_itoa(400 * defend->tree.buy_mod);

    print_text(defend, pos1, nb1, scale);
    print_text(defend, pos2, nb2, scale);
    print_text(defend, pos3, nb3, scale);
    print_text(defend, pos4, nb4, scale);
}

void print_market_hud(defender_t *defend)
{
    sfVector2f post = {1750, 0};
    sfVector2f scale = {1.3, 1.3};

    print_sprite(defend, 1720, -200, "images/hud_buy.png");
    print_sprite(defend, 1780, 70, "images/inv_tower1.png");
    print_sprite(defend, 1790, 240, "images/inv_tower2.png");
    print_sprite(defend, 1810, 440, "images/inv_tower3.png");
    print_sprite(defend, 1810, 640, "images/inv_tower4.png");
    print_text_buy(defend, scale);
    print_text(defend, post, "Market\0", scale);
}

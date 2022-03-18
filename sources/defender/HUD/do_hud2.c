/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** do_hud
*/

#include "defender.h"

int btn_tree(defender_t *defend)
{
    sfVector2i a = sfMouse_getPositionRenderWindow(defend->window);
    sfVector2f w = sfRenderWindow_mapPixelToCoords(defend->window, a, NULL);

    if (defend->mouse == 1) {
        if (w.x > 360 && w.x < 640 && w.y > 50 && w.y < 100 &&
            defend->money >= 500 && defend->tree.buy1 == 0) {
            defend->tree.buy1 = 1;
            defend->money -= 500;
            do_buy(defend, 1);
        }
        if (w.x > 800 && w.x < 1080 && w.y > 50 && w.y < 100 &&
            defend->money >= 500 && defend->tree.buy2 == 0) {
            defend->tree.buy2 = 1;
            defend->money -= 500;
            do_buy(defend, 2);
        }
        btn_tree1(defend, a, w);
    }
    return 0;
}

int btn_tree1(defender_t *defend, sfVector2i a, sfVector2f w)
{
    if (w.x > 330 && w.x < 520 && w.y > 180 && w.y < 230 &&
        defend->money >= 500 && defend->tree.buy3 == 0 &&
        defend->tree.buy1 == 1) {
        defend->tree.buy3 = 1;
        defend->money -= 1000;
        do_buy(defend, 3);
    }
    if (w.x > 530 && w.x < 700 && w.y > 180 && w.y < 230 &&
        defend->money >= 500 && defend->tree.buy4 == 0 &&
        defend->tree.buy1 == 1) {
        defend->tree.buy4 = 1;
        defend->money -= 1000;
        do_buy(defend, 4);
    }
    btn_tree2(defend, a, w);
    return 0;
}

int btn_tree2(defender_t *defend, sfVector2i a, sfVector2f w)
{
    if (w.x > 930 && w.x < 1120 && w.y > 180 && w.y < 230 &&
        defend->money >= 500 && defend->tree.buy6 == 0 &&
        defend->tree.buy2 == 1) {
        defend->tree.buy6 = 1;
        defend->money -= 1000;
        do_buy(defend, 5);
    }
    if (w.x > 730 && w.x < 920 && w.y > 180 && w.y < 230 &&
        defend->money >= 500 && defend->tree.buy5 == 0 &&
        defend->tree.buy2 == 1) {
        defend->tree.buy5 = 1;
        defend->money -= 1000;
        do_buy(defend, 6);
    }
    return 0;
}

void print_green(defender_t *dfnd, sfVector2f pos, char *str, sfVector2f scal)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile("images/Sectar.otf");

    sfText_setColor(text, sfGreen);
    sfText_setPosition(text, pos);
    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setScale(text, scal);
    sfRenderWindow_drawText(dfnd->window, text, NULL);
    sfFont_destroy(font);
    sfText_destroy(text);
    return;
}

void do_buy(defender_t *defend, int flag)
{
    if (flag == 1)
        defend->tree.dmg_mod = 1.2;
    if (flag == 2)
        defend->tree.life_mod = 0.8;
    if (flag == 3)
        defend->tree.up_mod = 0.8;
    if (flag == 4)
        defend->tree.buy_mod = 0.8;
    if (flag == 5)
        defend->tree.speed_mod = 0.8;
    if (flag == 6)
        defend->tree.outdmg_mod = 0.8;
    return;
}

/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** pause
*/

#include "defender.h"

void do_pause(defender_t *defend)
{
    sfSprite *spr_fnd = sfSprite_create();
    sfVector2f pos_fnd = {0, 0};
    sfTexture *fnd;
    button_t cont = new_btn(600, 130, "  Continue\0", 1);
    button_t main = new_btn(1150, 130, " main menu\0", 1);

    if (defend->map == 0)
        fnd = sfTexture_createFromFile("images/pause_tuto.png", NULL);
    if (defend->map == 1)
        fnd = sfTexture_createFromFile("images/pause_map1.png", NULL);
    if (defend->map == 2)
        fnd = sfTexture_createFromFile("images/pause_map2.png", NULL);
    if (defend->map == 3)
        fnd = sfTexture_createFromFile("images/pause_boss.png", NULL);
    sfSprite_setTexture(spr_fnd, fnd, sfFalse);
    sfSprite_setPosition(spr_fnd, pos_fnd);
    btn_update(&cont, defend);
    btn_update(&main, defend);
    draw_close(defend, fnd, spr_fnd);
    print_pause(defend, cont, main);
}

void print_pause(defender_t *dfnd, button_t play, button_t main)
{
    sfText *game = sfText_create();
    sfFont *font = sfFont_createFromFile("images/Sectar.otf");
    char name[14] = "      Pause\0";
    sfVector2f pos = {650, 100};
    sfVector2f scale = {3, 3};

    sfText_setColor(game, sfWhite);
    sfText_setPosition(game, pos);
    sfText_setString(game, name);
    sfText_setFont(game, font);
    sfText_setScale(game, scale);
    menu_to_menu(0, &main, dfnd);
    menu_to_menu(2, &play, dfnd);
    sfRenderWindow_drawSprite(dfnd->window, play.spr, NULL);
    sfRenderWindow_drawSprite(dfnd->window, main.spr, NULL);
    sfRenderWindow_drawText(dfnd->window, game, NULL);
    return draw_pause(dfnd, play, main);
}

void draw_pause(defender_t *dfnd, button_t play, button_t main)
{
    sfRenderWindow_drawText(dfnd->window, play.str, NULL);
    sfRenderWindow_drawText(dfnd->window, main.str, NULL);
    close_btn(play);
    close_btn(main);
    return;
}

void draw_close(defender_t *defend, sfTexture *fnd, sfSprite *spr_fnd)
{
    sfRenderWindow_drawSprite(defend->window, spr_fnd, NULL);
    destroy_fnd(fnd, spr_fnd);
    return;
}

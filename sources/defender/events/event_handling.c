/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** event_handling
*/

#include "defender.h"

int analyse_event(sfEvent event, defender_t *defend)
{
    if (event.type == sfEvtMouseButtonReleased || check_mouse(defend) == 0)
        defend->mouse = 0;
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(defend->window);
    if (event.type == sfEvtKeyPressed) {
        key_press(defend, event);
        binded(defend, event);
    }
    if (event.type == sfEvtMouseButtonPressed)
        defend->mouse = 1;
    return 0;
}

void close_menu(button_t btn1, button_t btn2, button_t btn3, defender_t *dfnd)
{
    close_btn(btn1);
    close_btn(btn2);
    close_btn(btn3);
    sfRenderWindow_close(dfnd->window);
}

void close_btn(button_t btn)
{
    sfTexture_destroy(btn.text_curs);
    sfTexture_destroy(btn.clic);
    sfTexture_destroy(btn.text_wth);
    sfSprite_destroy(btn.spr);
    sfText_destroy(btn.str);
}

void key_press(defender_t *defend, sfEvent event)
{
    if (event.key.code == sfKeyEscape)
        key_press2(defend, event);
    if (event.key.code == defend->params.key_buy && defend->fen == 2) {
        if (defend->hud == 10 || defend->hud == 21)
            defend->hud -= 10;
        else
            defend->hud += 10;
    }
    if (event.key.code == defend->params.key_inv && defend->fen == 2) {
        if (defend->hud == 11 || defend->hud == 21)
            defend->hud -= 11;
        else
            defend->hud += 11;
    }
    if (event.key.code == sfKeyLShift && defend->fen == 2)
        defend->money += 10000;
    return;
}

int check_mouse(defender_t *defend)
{
    sfVector2i a = sfMouse_getPositionRenderWindow(defend->window);
    sfVector2f w = sfRenderWindow_mapPixelToCoords(defend->window, a, NULL);

    if (defend->fen == 4 && w.x > 160 && w.x < 700 && w.y > 650)
        return 1;
    if (defend->fen == 2)
        return 1;
    return 0;
}

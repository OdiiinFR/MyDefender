/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** buttons
*/

#include "defender.h"

button_t new_btn(int x, int y, char *str, float scale)
{
    button_t new;
    sfVector2f pos = {x, y};
    sfVector2f mod = {scale, scale};

    new.pos = pos;
    new.text = 0;
    new.text_wth = sfTexture_createFromFile("images/buttons2.png", NULL);
    new.text_curs = sfTexture_createFromFile("images/buttons1.png", NULL);
    new.clic = sfTexture_createFromFile("images/buttons3.png", NULL);
    new.spr = sfSprite_create();
    new.lenght = 200;
    new.hight = 64;
    new.scale = mod;
    new.texte = str;
    new.str = btn_text(str, x, y, mod);
    sfSprite_setScale(new.spr, new.scale);
    sfSprite_setTexture(new.spr, new.text_wth, sfFalse);
    sfSprite_setPosition(new.spr, new.pos);
    return new;
}

void btn_update(button_t *btn, defender_t *defend)
{
    sfVector2i a = sfMouse_getPositionRenderWindow(defend->window);
    sfVector2f w = sfRenderWindow_mapPixelToCoords(defend->window, a, NULL);
    int xmn = (btn->pos.x - 1);
    int xmx = (btn->pos.x + ((btn->lenght + 1) * btn->scale.x));
    int ymn = (btn->pos.y - 1);
    int ymx = (btn->pos.y + ((btn->hight + 1) * btn->scale.x));

    if (w.x > xmn && w.x < xmx && w.y > ymn && w.y < ymx && btn->text == 0) {
        if (defend->mouse == 1)
            sfSprite_setTexture(btn->spr, btn->clic, sfFalse);
        else
            sfSprite_setTexture(btn->spr, btn->text_curs, sfFalse);
        btn->text = 1;
    } else {
        if (btn->text != 2) {
            sfSprite_setTexture(btn->spr, btn->text_wth, sfFalse);
            btn->text = 0;
        }
    }
    return;
}

int btn_quit(button_t *btn, defender_t *defend)
{
    sfVector2i a = sfMouse_getPositionRenderWindow(defend->window);
    sfVector2f w = sfRenderWindow_mapPixelToCoords(defend->window, a, NULL);
    int xmn = (btn->pos.x - 1);
    int xmx = (btn->pos.x + ((btn->lenght + 1) * btn->scale.x));
    int ymn = (btn->pos.y - 1);
    int ymx = (btn->pos.y + ((btn->hight + 1) * btn->scale.x));

    if (defend->mouse == 1) {
        if (w.x > xmn && w.x < xmx && w.y > ymn && w.y < ymx)
            return 84;
    }
    return 0;
}

sfText *btn_text(char *str, int x, int y, sfVector2f mod)
{
    sfText *game = sfText_create();
    sfFont *font = sfFont_createFromFile("images/Sectar.otf");
    sfVector2f pos = {(x + mod.x), ((y + 10) + mod.y)};
    sfVector2f scale = {1 * mod.y, 1 * mod.x};

    sfText_setColor(game, sfWhite);
    sfText_setPosition(game, pos);
    sfText_setString(game, str);
    sfText_setFont(game, font);
    sfText_setScale(game, scale);
    return game;
}

void menu_to_menu(int new, button_t *btn, defender_t *defend)
{
    sfVector2i a = sfMouse_getPositionRenderWindow(defend->window);
    sfVector2f w = sfRenderWindow_mapPixelToCoords(defend->window, a, NULL);
    int xmn = (btn->pos.x - 1);
    int xmx = (btn->pos.x + ((btn->lenght + 1) * btn->scale.x));
    int ymn = (btn->pos.y - 1);
    int ymx = (btn->pos.y + ((btn->hight + 1) * btn->scale.x));

    if (defend->mouse == 1) {
        if (w.x > xmn && w.x < xmx && w.y > ymn && w.y < ymx)
            defend->fen = new;
    }
    return;
}

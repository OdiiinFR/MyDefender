/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** key_choice
*/

#include "defender.h"

void set_keys(defender_t *defend)
{
    button_t key_buy = new_btn2(1500, 300, defend->params.buy, 1);
    button_t key_inv = new_btn2(1500, 450, defend->params.inv, 1);
    char name2[26] = "Inventary key :\0";
    char name1[22] = "Market key :\0";
    sfVector2f pos1 = {1000, 300};
    sfVector2f pos2 = {1000, 450};
    sfVector2f scale1 = {1.5, 1.5};

    key_buy.texte = name2;
    key_inv.texte = name1;
    print_text(defend, pos1, name1, scale1);
    print_text(defend, pos2, name2, scale1);
    btn_update(&key_buy, defend);
    btn_update(&key_inv, defend);
    new_bind(defend, &key_buy);
    new_bind(defend, &key_inv);
    print_btn(defend, key_buy);
    print_btn(defend, key_inv);
    return;
}

button_t new_btn2(int x, int y, char *str, float scale)
{
    button_t new;
    sfVector2f pos = {x, y};
    sfVector2f mod = {scale, scale};

    new.pos = pos;
    new.text = 0;
    new.text_wth = sfTexture_createFromFile("images/small_blue.png", NULL);
    new.text_curs = sfTexture_createFromFile("images/small_green.png", NULL);
    new.clic = sfTexture_createFromFile("images/small_red.png", NULL);
    new.spr = sfSprite_create();
    new.lenght = 69;
    new.hight = 64;
    new.scale = mod;
    new.texte = str;
    new.str = btn_text(str, 24 + x, y, mod);
    sfSprite_setScale(new.spr, new.scale);
    sfSprite_setTexture(new.spr, new.text_wth, sfFalse);
    sfSprite_setPosition(new.spr, new.pos);
    return new;
}

void new_bind(defender_t *defend, button_t *btn)
{
    sfVector2i a = sfMouse_getPositionRenderWindow(defend->window);
    sfVector2f w = sfRenderWindow_mapPixelToCoords(defend->window, a, NULL);
    int xmn = (btn->pos.x - 1);
    int xmx = (btn->pos.x + ((btn->lenght + 1) * btn->scale.x));
    int ymn = (btn->pos.y - 1);
    int ymx = (btn->pos.y + ((btn->hight + 1) * btn->scale.x));

    if (defend->params.key == 1) {
        if (strcompare("Market key :\0", btn->texte) == 0)
            sfSprite_setTexture(btn->spr, btn->clic, sfFalse);
    }
    if (defend->params.key == 2) {
        if (strcompare("Inventary key :\0", btn->texte) == 0)
            sfSprite_setTexture(btn->spr, btn->clic, sfFalse);
    }
    if (defend->mouse == 1) {
        if (w.x > xmn && w.x < xmx && w.y > ymn && w.y < ymx)
            set_bind(defend, btn);
    }
    return;
}

void set_bind(defender_t *defend, button_t *btn)
{
    if (strcompare("Market key :\0", btn->texte) == 0) {
        sfSprite_setTexture(btn->spr, btn->clic, sfFalse);
        defend->params.key = 1;
    }
    if (strcompare("Inventary key :\0", btn->texte) == 0) {
        sfSprite_setTexture(btn->spr, btn->clic, sfFalse);
        defend->params.key = 2;
    }
    return;
}

void binded(defender_t *defend, sfEvent event)
{
    defend->mouse = 2;
    if (defend->params.key == 1) {
        if (test_1(defend, 1, event) != defend->params.buy[0]) {
            defend->params.inv[0] = test_1(defend, 1, event);
            defend->params.key_inv = event.key.code;
        }
        defend->mouse = 0;
        defend->params.key = 0;
    }
    if (defend->params.key == 2) {
        if (test_1(defend, 1, event) != defend->params.inv[0]) {
            defend->params.buy[0] = test_1(defend, 1, event);
            defend->params.key_buy = event.key.code;
        }
        defend->mouse = 0;
        defend->params.key = 0;
    }
    return;
}

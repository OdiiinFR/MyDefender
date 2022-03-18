/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** frame
*/

#include "defender.h"

void find_frame(defender_t *defend, button_t *btn)
{
    if (strcompare("\t\t30\0", btn->texte) == 0) {
        sfSprite_setTexture(btn->spr, btn->clic, sfFalse);
        defend->framerate = 30;
        sfRenderWindow_setFramerateLimit(defend->window, 30);
    }
    if (strcompare("\t\t60\0", btn->texte) == 0) {
        sfSprite_setTexture(btn->spr, btn->clic, sfFalse);
        defend->framerate = 60;
        sfRenderWindow_setFramerateLimit(defend->window, 60);
    }
    if (strcompare("\t   144\0", btn->texte) == 0) {
        sfSprite_setTexture(btn->spr, btn->clic, sfFalse);
        defend->framerate = 144;
        sfRenderWindow_setFramerateLimit(defend->window, 144);
    }
    return;
}

void frame2(defender_t *defend, button_t *btn)
{
    if (defend->framerate == 30) {
        if (strcompare("\t\t30\0", btn->texte) == 0) {
            sfSprite_setTexture(btn->spr, btn->clic, sfFalse);
            btn->text = 2;
        }
    }
    if (defend->framerate == 60) {
        if (strcompare("\t\t60\0", btn->texte) == 0) {
            sfSprite_setTexture(btn->spr, btn->clic, sfFalse);
            btn->text = 2;
        }
    }
    return;
}

void set_volume(defender_t *defend)
{
    button_t slider = new_btn2(675, 686, " ", 1);
    button_t slider2 = new_btn2(675, 885, " ", 1);
    sfVector2f txt1 = {150, 600};
    sfVector2f txt2 = {150, 800};
    sfVector2f scale = {1, 1};

    print_sprite(defend, 150, 670, "images/slider.png");
    print_sprite(defend, 150, 870, "images/slider.png");
    slider_update(defend, &slider, &defend->slid1);
    slider_update(defend, &slider2, &defend->slid2);
    slider.pos = defend->slid1;
    slider2.pos = defend->slid2;
    btn_update(&slider, defend);
    btn_update(&slider2, defend);
    print_btn(defend, slider);
    print_btn(defend, slider2);
    print_text(defend, txt1, "Volume of musics :", scale);
    print_text(defend, txt2, "Volume of sounds :", scale);
    return;
}

void slider_update(defender_t *defend, button_t *btn, sfVector2f *pos)
{
    sfVector2i a = sfMouse_getPositionRenderWindow(defend->window);
    sfVector2f w = sfRenderWindow_mapPixelToCoords(defend->window, a, NULL);
    int xmn = (btn->pos.x - 11);
    int xmx = (btn->pos.x + ((btn->lenght + 1) * btn->scale.x) + 10);
    int ymn = (btn->pos.y - 1);
    int ymx = (btn->pos.y + ((btn->hight + 1) * btn->scale.x));
    float new;

    if (defend->mouse == 1) {
        if (w.y > ymn && w.y < ymx && w.x > (170 + 34) && w.x < (676 + 34)) {
            btn->pos.x = w.x - 34;
            pos->x = w.x - 34;
            new = (btn->pos.x / 5) - 34.3;
            sond_update(defend, btn, new);
        }
    }
    return;
}

void sond_update(defender_t *defend, button_t *btn, float new)
{
    if (new <= 2)
        new = 0;
    if (btn->pos.y == 686)
        defend->sound.vol_music = new;
    if (btn->pos.y == 885)
        defend->sound.vol_sound = new;
    return;
}

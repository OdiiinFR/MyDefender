/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** print_map
*/

#include "defender.h"

void do_map(defender_t *defend)
{
    int lose = 0;

    if (defend->hp < 0)
        lose = 1;
    defend->map == 1 ? map_1(defend, lose, defend->towers) : 0;
    defend->map == 2 ? map_2(defend, lose, defend->towers) : 0;
    defend->map == 3 ? map_3(defend, lose, defend->towers) : 0;
    defend->map == 0 ? map_4(defend, lose, defend->towers) : 0;
    return;
}

void print_sprite(defender_t *defend, int x, int y, char *path)
{
    sfSprite *spr_map = sfSprite_create();
    sfVector2f pos_map = {x, y};
    sfTexture *map = sfTexture_createFromFile(path, NULL);

    sfSprite_setTexture(spr_map, map, sfFalse);
    sfSprite_setPosition(spr_map, pos_map);
    sfRenderWindow_drawSprite(defend->window, spr_map, NULL);
    sfSprite_destroy(spr_map);
    sfTexture_destroy(map);
}

void print_mini_maps(defender_t *defend)
{
    print_sprite(defend, 0, 0, "images/background.png");
    print_sprite(defend, 100, 400, "images/mini4.png");
    print_sprite(defend, 525, 400, "images/mini1.png");
    print_sprite(defend, 950, 400, "images/mini2.png");
    print_sprite(defend, 1375, 400, "images/mini3.png");
    return;
}

void set_frame(defender_t *defend)
{
    sfVector2f pos = {1000, 650};
    sfVector2f scale = {1.5, 1.5};
    button_t frame1 = new_btn(1000, 800, "\t   144", 1);
    button_t frame2 = new_btn(1220, 800, "\t\t60", 1);
    button_t frame3 = new_btn(1440, 800, "\t\t30", 1);

    print_text(defend, pos, "Set up your FrameRate :\0", scale);
    wind_frameupdate(defend, &frame1);
    wind_frameupdate(defend, &frame2);
    wind_frameupdate(defend, &frame3);
    btn_update(&frame1, defend);
    btn_update(&frame2, defend);
    btn_update(&frame3, defend);
    print_btn(defend, frame1);
    print_btn(defend, frame2);
    print_btn(defend, frame3);
    return;
}

void wind_frameupdate(defender_t *defend, button_t *btn)
{
    sfVector2i a = sfMouse_getPositionRenderWindow(defend->window);
    sfVector2f w = sfRenderWindow_mapPixelToCoords(defend->window, a, NULL);
    int xmn = (btn->pos.x - 1);
    int xmx = (btn->pos.x + ((btn->lenght + 1) * btn->scale.x));
    int ymn = (btn->pos.y - 1);
    int ymx = (btn->pos.y + ((btn->hight + 1) * btn->scale.x));

    frame2(defend, btn);
    if (defend->framerate == 144) {
        if (strcompare("\t   144\0", btn->texte) == 0) {
            sfSprite_setTexture(btn->spr, btn->clic, sfFalse);
            btn->text = 2;
        }
    }
    if (defend->mouse == 1) {
        if (w.x > xmn && w.x < xmx && w.y > ymn && w.y < ymx)
            find_frame(defend, btn);
    }
    return;
}

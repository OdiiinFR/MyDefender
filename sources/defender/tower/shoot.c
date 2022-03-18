/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** shoot
*/

#include "defender.h"

void find_shoot2(defender_t *defend, tower_t *tower)
{
    if (tower->focus == 9)
        return do_shoot(defend, &defend->vs.v9, tower);
    if (tower->focus == 10)
        return do_shoot(defend, &defend->vs.v10, tower);
    if (tower->focus == 11)
        return do_shoot(defend, &defend->vs.v11, tower);
    if (tower->focus == 12)
        return do_shoot(defend, &defend->vs.v12, tower);
    if (tower->focus == 13)
        return do_shoot(defend, &defend->vs.v13, tower);
    if (tower->focus == 14)
        return do_shoot(defend, &defend->vs.v14, tower);
    if (tower->focus == 15)
        return do_shoot(defend, &defend->vs.v15, tower);
    return;
}

void find_shoot(defender_t *defend, tower_t *tower)
{
    switch (tower->focus) {
        case 1:
            return do_shoot(defend, &defend->vs.v1, tower);
        case 2:
            return do_shoot(defend, &defend->vs.v2, tower);
        case 3:
            return do_shoot(defend, &defend->vs.v3, tower);
        case 4:
            return do_shoot(defend, &defend->vs.v4, tower);
        case 5:
            return do_shoot(defend, &defend->vs.v5, tower);
        case 6:
            return do_shoot(defend, &defend->vs.v6, tower);
        case 7:
            return do_shoot(defend, &defend->vs.v7, tower);
        case 8:
            return do_shoot(defend, &defend->vs.v8, tower);
        default:
            return find_shoot2(defend, tower);
    }
}

float ang_pos2(sfVector2f *pos, int angle)
{
    if (angle == 4) {
        pos->x += 90;
        pos->y += 70;
        return 90;
    }
    if (angle == 5) {
        pos->y += 70;
        return 135;
    }
    if (angle == 6) {
        pos->y += 70;
        return 180;
    }
    if (angle == 7) {
        pos->y += 30;
        return -135;
    }
    return 0;
}

float ang_pos(sfVector2f *pos, int angle)
{
    if (angle == 0) {
        pos->x += 20;
        return -90;
    }
    if (angle == 1) {
        pos->x += 70;
        return -45;
    }
    if (angle == 2) {
        pos->x += 70;
        pos->y += 30;
        return 0;
    }
    if (angle == 3) {
        pos->x += 115;
        pos->y += 70;
        return 45;
    }
    return ang_pos2(pos, angle);
}

void print_laser(defender_t *defend, sfVector2f pos, int angle)
{
    sfSprite *spr_map = sfSprite_create();
    sfTexture *map = sfTexture_createFromFile("images/laser-end.png", NULL);
    float ang = ang_pos(&pos, angle);

    sfSprite_setTexture(spr_map, map, sfFalse);
    sfSprite_setPosition(spr_map, pos);
    sfSprite_setRotation(spr_map, ang);
    sfRenderWindow_drawSprite(defend->window, spr_map, NULL);
    sfSprite_destroy(spr_map);
    sfTexture_destroy(map);
    return;
}

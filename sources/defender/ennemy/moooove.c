/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** moooove
*/

#include "defender.h"

void act_map2(defender_t *defend, ennemy_t *vs)
{
    if (defend->map == 2) {
        angle_choice(defend, vs);
        act_map2_1(defend, vs);
        if (vs->pos.x < 1450 && vs->pos.y <= 160 && vs->vir == 2)
            vs->angle = 0;
        if (vs->pos.x > 1450 && vs->pos.y < 620 && vs->vir == 2)
            vs->angle = 3;
        if (vs->pos.x < 1625 && vs->pos.y >= 620 && vs->vir == 2)
            vs->angle = 0;
        if (vs->pos.x >= 1625) {
            vs->angle = 9;
            vs->attack = 1;
        }
        sfSprite_setTextureRect(vs->spr, vs->rect);
        sfSprite_setPosition(vs->spr, vs->pos);
        sfRenderWindow_drawSprite(defend->window, vs->spr, NULL);
    }
    return;
}

void act_map2_1(defender_t *defend, ennemy_t *vs)
{
    if (vs->pos.x < 350 && vs->pos.y == 125 && vs->vir == 0)
        vs->angle = 0;
    if (vs->pos.x > 350 && vs->pos.y <= 860 && vs->vir == 0)
        vs->angle = 3;
    if (vs->pos.x < 790 && vs->pos.y >= 860) {
        vs->vir = 1;
        vs->angle = 0;
    }
    if (vs->pos.x >= 790 && vs->pos.y >= 415 && vs->vir == 1)
        vs->angle = 1;
    if (vs->pos.x < 1055 && vs->pos.y <= 415 && vs->vir == 1)
        vs->angle = 0;
    if (vs->pos.x > 1055 && vs->pos.y >= 160 && vs->pos.x < 1400) {
        vs->vir = 2;
        vs->angle = 1;
    }
    return;
}

void act_map3(defender_t *defend, ennemy_t *vs)
{
    if (defend->map == 3) {
        angle_choice(defend, vs);
        act_map3_1(defend, vs);
        if (vs->pos.x < 1335 && vs->pos.y <= 190 && vs->vir == 2) {
            vs->vir = 2;
            vs->angle = 0;
        }
        if (vs->pos.x > 1335 && vs->pos.y < 580 && vs->vir == 2)
            vs->angle = 3;
        if (vs->pos.x < 1635 && vs->pos.y >= 580 && vs->vir == 2)
            vs->angle = 0;
        if (vs->pos.x >= 1635) {
            vs->angle = 9;
            vs->attack = 1;
        }
        sfSprite_setTextureRect(vs->spr, vs->rect);
        sfSprite_setPosition(vs->spr, vs->pos);
        sfRenderWindow_drawSprite(defend->window, vs->spr, NULL);
    }
    return;
}

void act_map3_1(defender_t *defend, ennemy_t *vs)
{
    if (vs->pos.x == 150 && vs->pos.y <= 755)
        vs->angle = 3;
    if (vs->pos.x < 940 && vs->pos.y >= 755)
        vs->angle = 0;
    if (vs->pos.x > 940 && vs->pos.y >= 450 && vs->vir == 0) {
        vs->vir = 1;
        vs->angle = 1;
    }
    if (vs->pos.x > 560 && vs->pos.y <= 450 && vs->vir == 1)
        vs->angle = 4;
    if (vs->pos.x < 560 && vs->pos.y >= 190 && vs->vir == 1) {
        vs->vir = 2;
        vs->angle = 1;
    }
    return;
}

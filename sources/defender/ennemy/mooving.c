/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** mooving
*/

#include "defender.h"

void angle3(defender_t *defend, ennemy_t *vs)
{
    if (vs->type == 1) {
        vs->rect.width = 129;
        vs->rect.top = 330;
        vs->rect.height = 100;
    }
    if (vs->type == 2) {
        vs->rect.width = 160;
        vs->rect.top = 330;
        vs->rect.height = 150;
    }
    if (vs->type == 3) {
        vs->rect.width = 100;
        vs->rect.top = 160;
        vs->rect.height = 80;
    }
    if (vs->type == 4) {
        vs->rect.width = 149;
        vs->rect.top = 72;
        vs->rect.height = 36;
    }
}

void angle4(defender_t *defend, ennemy_t *vs)
{
    if (vs->type == 1) {
        vs->rect.width = 129;
        vs->rect.top = 430;
        vs->rect.height = 100;
    }
    if (vs->type == 2) {
        vs->rect.width = 160;
        vs->rect.top = 480;
        vs->rect.height = 150;
    }
    if (vs->type == 3) {
        vs->rect.width = 100;
        vs->rect.top = 240;
        vs->rect.height = 80;
    }
    if (vs->type == 4) {
        vs->rect.width = 149;
        vs->rect.top = 118;
        vs->rect.height = 36;
    }
}

void angle_choice(defender_t *defend, ennemy_t *vs)
{
    if (vs->type == 1)
        return spe1(defend, vs);
    if (vs->angle == 0) {
        angle0(defend, vs);
        vs->pos.x += vs->speed;
    }
    if (vs->angle == 1) {
        angle1(defend, vs);
        vs->pos.y -= vs->speed;
    }
    if (vs->angle == 3) {
        angle3(defend, vs);
        vs->pos.y += vs->speed;
    }
    if (vs->angle == 4) {
        angle4(defend, vs);
        vs->pos.x -= vs->speed;
    }
}

void act_map0(defender_t *defend, ennemy_t *vs)
{
    if (defend->map == 0) {
        angle_choice(defend, vs);
        if (vs->pos.x < 240 && vs->pos.y >= 360 && vs->vir == 0)
            vs->angle = 1;
        if (vs->pos.x < 1320 && vs->pos.y <= 360)
            vs->angle = 0;
        if (vs->pos.x > 1320 && vs->pos.y <= 790) {
            vs->angle = 3;
            vs->vir = 1;
        }
        if (vs->pos.x < 1675 && vs->pos.y >= 790 && vs->vir == 1)
            vs->angle = 0;
        if (vs->pos.x >= 1675) {
            vs->angle = 9;
            vs->attack = 1;
        }
        sfSprite_setTextureRect(vs->spr, vs->rect);
        sfSprite_setPosition(vs->spr, vs->pos);
        sfRenderWindow_drawSprite(defend->window, vs->spr, NULL);
    }
}

void act_map1(defender_t *defend, ennemy_t *vs)
{
    if (defend->map == 1) {
        angle_choice(defend, vs);
        if (vs->pos.x < 370 && vs->pos.y >= 745)
            vs->angle = 0;
        if (vs->pos.x > 370 && vs->pos.y >= 350)
            vs->angle = 1;
        if (vs->pos.x < 1110 && vs->pos.y <= 350)
            vs->angle = 0;
        if (vs->pos.x >= 1110 && vs->pos.y <= 730) {
            vs->vir = 1;
            vs->angle = 3;
        }
        if (vs->pos.x < 1640 && vs->pos.y >= 730 && vs->vir == 1)
            vs->angle = 0;
        if (vs->pos.x >= 1640)
            vs->angle = 9;
        sfSprite_setTextureRect(vs->spr, vs->rect);
        sfSprite_setPosition(vs->spr, vs->pos);
        sfRenderWindow_drawSprite(defend->window, vs->spr, NULL);
    }
}

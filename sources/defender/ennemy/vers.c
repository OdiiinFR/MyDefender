/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** vers
*/

#include "defender.h"

void spe1_3(defender_t *defend, ennemy_t *vs)
{
    if (vs->moove <= 4) {
        vs->rect.width = 129;
        vs->rect.top = 330;
        vs->rect.height = 100;
        vs->moove += 1;
    } else if (vs->moove > 4) {
        vs->rect.width = 129;
        vs->rect.top = 900;
        vs->rect.height = 100;
        vs->moove = 0;
    }
    vs->pos.y += vs->speed;
    return;
}

void spe1_4(defender_t *defend, ennemy_t *vs)
{
    if (vs->moove <= 4) {
        vs->rect.width = 129;
        vs->rect.top = 430;
        vs->rect.height = 100;
        vs->moove += 1;
    } else if (vs->moove > 4) {
        vs->rect.width = 129;
        vs->rect.top = 1070;
        vs->rect.height = 100;
        vs->moove = 0;
    }
    vs->pos.x -= vs->speed;
}

void spe1_0(defender_t *defend, ennemy_t *vs)
{
    if (vs->moove <= 4) {
        vs->rect.width = 129;
        vs->rect.top = 30;
        vs->rect.height = 100;
        vs->moove += 1;
    } else if (vs->moove > 4) {
        vs->rect.width = 129;
        vs->rect.top = 577;
        vs->rect.height = 100;
        vs->moove = 0;
    }
    vs->pos.x += vs->speed;
    return;
}

void spe1(defender_t *defend, ennemy_t *vs)
{
    if (vs->angle == 0)
        spe1_0(defend, vs);
    if (vs->angle == 1) {
        if (vs->moove < 1000) {
            vs->rect.width = 129;
            vs->rect.top = 160;
            vs->rect.height = 100;
            vs->moove += 1;
        }
        vs->pos.y -= vs->speed;
    }
    if (vs->angle == 3)
        spe1_3(defend, vs);
    if (vs->angle == 4)
        spe1_4(defend, vs);
    return;
}

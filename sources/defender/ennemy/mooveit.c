/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** mooveit
*/

#include "defender.h"

void moove_ennemy(defender_t *defend)
{
    find_nb(defend);
    return;
}

void find_nb(defender_t *defend)
{
    switch (defend->vs.ctr) {
        case 1:
            return do_action(defend, &defend->vs.v1);
        case 2:
            do_action(defend, &defend->vs.v1);
            return do_action(defend, &defend->vs.v2);
        case 3:
            do_action(defend, &defend->vs.v1);
            do_action(defend, &defend->vs.v2);
            return do_action(defend, &defend->vs.v3);
        case 4:
            do_action(defend, &defend->vs.v1);
            do_action(defend, &defend->vs.v2);
            do_action(defend, &defend->vs.v3);
            return do_action(defend, &defend->vs.v4);
        default:
            return find_nb2(defend);
    }
}

void do_action(defender_t *defend, ennemy_t *vs)
{
    act_map0(defend, vs);
    act_map1(defend, vs);
    act_map2(defend, vs);
    act_map3(defend, vs);
    if (vs->attack == 1 || vs->angle == 9) {
        if (vs->pos.x > 0)
            defend->hp -= (vs->dmg * 0.3);
    }
    if (defend->hp < 0)
        defend->fen = 9;
    return;
}

void angle0(defender_t *defend, ennemy_t *vs)
{
    if (vs->type == 1) {
        vs->rect.width = 129;
        vs->rect.top = 30;
        vs->rect.height = 100;
    }
    if (vs->type == 2) {
        vs->rect.width = 160;
        vs->rect.top = 30;
        vs->rect.height = 150;
    }
    if (vs->type == 3) {
        vs->rect.width = 100;
        vs->rect.top = 10;
        vs->rect.height = 70;
    }
    if (vs->type == 4) {
        vs->rect.width = 140;
        vs->rect.top = 0;
        vs->rect.height = 34;
    }
}

void angle1(defender_t *defend, ennemy_t *vs)
{
    if (vs->type == 1) {
        vs->rect.width = 129;
        vs->rect.top = 160;
        vs->rect.height = 100;
    }
    if (vs->type == 2) {
        vs->rect.width = 160;
        vs->rect.top = 180;
        vs->rect.height = 150;
    }
    if (vs->type == 3) {
        vs->rect.width = 100;
        vs->rect.top = 80;
        vs->rect.height = 70;
    }
    if (vs->type == 4) {
        vs->rect.width = 149;
        vs->rect.top = 36;
        vs->rect.height = 36;
    }
}

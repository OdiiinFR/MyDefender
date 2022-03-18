/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** shoot3
*/

#include "defender.h"

void angle_d2(ennemy_t *vs, tower_t *tower, defender_t *defend)
{
    if ((vs->pos.y + 63) < tower->pos.y && vs->pos.y < tower->pos.y) {
        tower->angle = 1;
        return change(vs, tower, defend);
    }
    if (vs->pos.y < tower->pos.y) {
        tower->angle = 2;
        return change(vs, tower, defend);
    }
    if (vs->pos.y > tower->pos.y) {
        tower->angle = 3;
        return change(vs, tower, defend);
    }
    return;
}

void angle_d1(ennemy_t *vs, tower_t *tower, defender_t *defend)
{
    if ((vs->pos.y + 63) < tower->pos.y &&
        (vs->pos.y + 126) < tower->pos.y) {
        tower->angle = 7;
        return change(vs, tower, defend);
    }
    if (vs->pos.y < tower->pos.y) {
        tower->angle = 6;
        return change(vs, tower, defend);
    }
    if (vs->pos.y > tower->pos.y) {
        tower->angle = 5;
        return change(vs, tower, defend);
    }
    return;
}

void find_angle(ennemy_t *vs, tower_t *tower, defender_t *defend)
{
    if ((vs->pos.x + 63) < tower->pos.x)
        return angle_d1(vs, tower, defend);
    if (vs->pos.x > tower->pos.x)
        return angle_d2(vs, tower, defend);
    if (vs->pos.y > tower->pos.y) {
        tower->angle = 4;
        return change(vs, tower, defend);
    }
    if (tower->angle == 7 || tower->angle == 1)
        tower->angle = 0;
    return change(vs, tower, defend);
}

/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** in_circle1
*/

#include "defender.h"

void check_ennemy1(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i)
{
    float x = defend->vs.v1.pos.x - posc.x;
    float y = defend->vs.v1.pos.y - posc.y;

    if (pow(x, 2) + pow(y, 2) <= pow(tower.x, 2)) {
        tower.y == 0 ? defend->all.t1.focus = i : 0;
        tower.y == 1 ? defend->all.t2.focus = i : 0;
        tower.y == 2 ? defend->all.t3.focus = i : 0;
        tower.y == 3 ? defend->all.t4.focus = i : 0;
        tower.y == 4 ? defend->all.t5.focus = i : 0;
        tower.y == 5 ? defend->all.t6.focus = i : 0;
        tower.y == 6 ? defend->all.t7.focus = i : 0;
        tower.y == 7 ? defend->all.t8.focus = i : 0;
        return;
    }
}

void check_ennemy2(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i)
{
    float x = defend->vs.v2.pos.x - posc.x;
    float y = defend->vs.v2.pos.y - posc.y;

    if (pow(x, 2) + pow(y, 2) <= pow(tower.x, 2)) {
        tower.y == 0 ? defend->all.t1.focus = i : 0;
        tower.y == 1 ? defend->all.t2.focus = i : 0;
        tower.y == 2 ? defend->all.t3.focus = i : 0;
        tower.y == 3 ? defend->all.t4.focus = i : 0;
        tower.y == 4 ? defend->all.t5.focus = i : 0;
        tower.y == 5 ? defend->all.t6.focus = i : 0;
        tower.y == 6 ? defend->all.t7.focus = i : 0;
        tower.y == 7 ? defend->all.t8.focus = i : 0;
        return;
    }
}

void check_ennemy3(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i)
{
    float x = defend->vs.v3.pos.x - posc.x;
    float y = defend->vs.v3.pos.y - posc.y;

    if (pow(x, 2) + pow(y, 2) <= pow(tower.x, 2)) {
        tower.y == 0 ? defend->all.t1.focus = i : 0;
        tower.y == 1 ? defend->all.t2.focus = i : 0;
        tower.y == 2 ? defend->all.t3.focus = i : 0;
        tower.y == 3 ? defend->all.t4.focus = i : 0;
        tower.y == 4 ? defend->all.t5.focus = i : 0;
        tower.y == 5 ? defend->all.t6.focus = i : 0;
        tower.y == 6 ? defend->all.t7.focus = i : 0;
        tower.y == 7 ? defend->all.t8.focus = i : 0;
        return;
    }
}

void check_ennemy4(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i)
{
    float x = defend->vs.v4.pos.x - posc.x;
    float y = defend->vs.v4.pos.y - posc.y;

    if (pow(x, 2) + pow(y, 2) <= pow(tower.x, 2)) {
        tower.y == 0 ? defend->all.t1.focus = i : 0;
        tower.y == 1 ? defend->all.t2.focus = i : 0;
        tower.y == 2 ? defend->all.t3.focus = i : 0;
        tower.y == 3 ? defend->all.t4.focus = i : 0;
        tower.y == 4 ? defend->all.t5.focus = i : 0;
        tower.y == 5 ? defend->all.t6.focus = i : 0;
        tower.y == 6 ? defend->all.t7.focus = i : 0;
        tower.y == 7 ? defend->all.t8.focus = i : 0;
        return;
    }
}

void check_ennemy5(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i)
{
    float x = defend->vs.v5.pos.x - posc.x;
    float y = defend->vs.v5.pos.y - posc.y;

    if (pow(x, 2) + pow(y, 2) <= pow(tower.x, 2)) {
        tower.y == 0 ? defend->all.t1.focus = i : 0;
        tower.y == 1 ? defend->all.t2.focus = i : 0;
        tower.y == 2 ? defend->all.t3.focus = i : 0;
        tower.y == 3 ? defend->all.t4.focus = i : 0;
        tower.y == 4 ? defend->all.t5.focus = i : 0;
        tower.y == 5 ? defend->all.t6.focus = i : 0;
        tower.y == 6 ? defend->all.t7.focus = i : 0;
        tower.y == 7 ? defend->all.t8.focus = i : 0;
        return;
    }
    return;
}

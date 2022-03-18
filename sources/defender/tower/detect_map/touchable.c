/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** touchable
*/

#include "defender.h"

void touchable3(defender_t *defend)
{
    if (defend->map == 3) {
        detect_map4(defend);
        find_shoot(defend, &defend->all.t1);
        find_shoot(defend, &defend->all.t2);
        find_shoot(defend, &defend->all.t3);
        find_shoot(defend, &defend->all.t4);
        find_shoot(defend, &defend->all.t5);
        find_shoot(defend, &defend->all.t6);
        find_shoot(defend, &defend->all.t7);
        find_shoot(defend, &defend->all.t8);
    }
}

void touchable2(defender_t *defend)
{
    if (defend->map == 2) {
        detect_map3(defend);
        find_shoot(defend, &defend->all.t1);
        find_shoot(defend, &defend->all.t2);
        find_shoot(defend, &defend->all.t3);
        find_shoot(defend, &defend->all.t4);
        find_shoot(defend, &defend->all.t5);
        find_shoot(defend, &defend->all.t6);
        find_shoot(defend, &defend->all.t7);
        find_shoot(defend, &defend->all.t8);
    }
    touchable3(defend);
}

void touchable(defender_t *defend)
{
    if (defend->map == 0) {
        detect_map1(defend);
        find_shoot(defend, &defend->all.t1);
        find_shoot(defend, &defend->all.t2);
        find_shoot(defend, &defend->all.t3);
        find_shoot(defend, &defend->all.t4);
    }
    if (defend->map == 1) {
        detect_map2(defend);
        find_shoot(defend, &defend->all.t1);
        find_shoot(defend, &defend->all.t2);
        find_shoot(defend, &defend->all.t3);
        find_shoot(defend, &defend->all.t4);
        find_shoot(defend, &defend->all.t5);
        find_shoot(defend, &defend->all.t6);
    }
    touchable2(defend);
}

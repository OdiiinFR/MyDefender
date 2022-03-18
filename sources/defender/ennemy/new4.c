/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** new4
*/

#include "defender.h"

void find_nb9(defender_t *defend)
{
    if (defend->vs.ctr == 14) {
        do_action(defend, &defend->vs.v1);
        do_action(defend, &defend->vs.v2);
        do_action(defend, &defend->vs.v3);
        do_action(defend, &defend->vs.v4);
        do_action(defend, &defend->vs.v5);
        do_action(defend, &defend->vs.v6);
        do_action(defend, &defend->vs.v7);
        do_action(defend, &defend->vs.v8);
        do_action(defend, &defend->vs.v9);
        do_action(defend, &defend->vs.v10);
        do_action(defend, &defend->vs.v11);
        do_action(defend, &defend->vs.v12);
        do_action(defend, &defend->vs.v13);
        return do_action(defend, &defend->vs.v14);
    }
    return find_nb10(defend);
}

void find_nb10(defender_t *defend)
{
    if (defend->vs.ctr == 15) {
        do_action(defend, &defend->vs.v1);
        do_action(defend, &defend->vs.v2);
        do_action(defend, &defend->vs.v3);
        do_action(defend, &defend->vs.v4);
        do_action(defend, &defend->vs.v5);
        do_action(defend, &defend->vs.v6);
        do_action(defend, &defend->vs.v7);
        do_action(defend, &defend->vs.v8);
        do_action(defend, &defend->vs.v9);
        do_action(defend, &defend->vs.v10);
        do_action(defend, &defend->vs.v11);
        do_action(defend, &defend->vs.v12);
        do_action(defend, &defend->vs.v13);
        do_action(defend, &defend->vs.v14);
        return do_action(defend, &defend->vs.v15);
    }
    return;
}

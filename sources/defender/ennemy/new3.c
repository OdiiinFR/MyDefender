/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** new3
*/

#include "defender.h"

void find_nb4(defender_t *defend)
{
    if (defend->vs.ctr == 9) {
        do_action(defend, &defend->vs.v1);
        do_action(defend, &defend->vs.v2);
        do_action(defend, &defend->vs.v3);
        do_action(defend, &defend->vs.v4);
        do_action(defend, &defend->vs.v5);
        do_action(defend, &defend->vs.v6);
        do_action(defend, &defend->vs.v7);
        do_action(defend, &defend->vs.v8);
        return do_action(defend, &defend->vs.v9);
    }
    return find_nb5(defend);
}

void find_nb5(defender_t *defend)
{
    if (defend->vs.ctr == 10) {
        do_action(defend, &defend->vs.v1);
        do_action(defend, &defend->vs.v2);
        do_action(defend, &defend->vs.v3);
        do_action(defend, &defend->vs.v4);
        do_action(defend, &defend->vs.v5);
        do_action(defend, &defend->vs.v6);
        do_action(defend, &defend->vs.v7);
        do_action(defend, &defend->vs.v8);
        do_action(defend, &defend->vs.v9);
        return do_action(defend, &defend->vs.v10);
    }
    return find_nb6(defend);
}

void find_nb6(defender_t *defend)
{
    if (defend->vs.ctr == 11) {
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
        return do_action(defend, &defend->vs.v11);
    }
    return find_nb7(defend);
}

void find_nb7(defender_t *defend)
{
    if (defend->vs.ctr == 12) {
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
        return do_action(defend, &defend->vs.v12);
    }
    return find_nb8(defend);
}

void find_nb8(defender_t *defend)
{
    if (defend->vs.ctr == 13) {
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
        return do_action(defend, &defend->vs.v13);
    }
    return find_nb9(defend);
}

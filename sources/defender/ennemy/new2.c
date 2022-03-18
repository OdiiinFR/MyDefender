/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** new2
*/

#include "defender.h"

sfIntRect type1(int angle)
{
    sfIntRect rect = {10, 0, 0, 0};

    if (angle == 0) {
        rect.width = 160;
        rect.top = 30;
        rect.height = 150;
    }
    if (angle == 1) {
        rect.width = 160;
        rect.top = 180;
        rect.height = 150;
    }
    if (angle == 3) {
        rect.width = 160;
        rect.top = 330;
        rect.height = 150;
    }
    return rect;
}

sfIntRect type2(int angle)
{
    sfIntRect rect = {5, 0, 0, 0};

    if (angle == 0) {
        rect.width = 100;
        rect.top = 10;
        rect.height = 70;
    }
    if (angle == 1) {
        rect.width = 100;
        rect.top = 80;
        rect.height = 70;
    }
    if (angle == 3) {
        rect.width = 100;
        rect.top = 160;
        rect.height = 80;
    }
    return rect;
}

sfIntRect type3(int angle)
{
    sfIntRect rect = {0, 0, 0, 0};

    if (angle == 0) {
        rect.width = 140;
        rect.top = 0;
        rect.height = 36;
    }
    if (angle == 1) {
        rect.width = 149;
        rect.top = 36;
        rect.height = 36;
    }
    if (angle == 3) {
        rect.width = 149;
        rect.top = 72;
        rect.height = 36;
    }
    return rect;
}

void find_nb2(defender_t *defend)
{
    switch (defend->vs.ctr) {
        case 5:
            do_action(defend, &defend->vs.v1);
            do_action(defend, &defend->vs.v2);
            do_action(defend, &defend->vs.v3);
            do_action(defend, &defend->vs.v4);
            return do_action(defend, &defend->vs.v5);
        case 6:
            do_action(defend, &defend->vs.v1);
            do_action(defend, &defend->vs.v2);
            do_action(defend, &defend->vs.v3);
            do_action(defend, &defend->vs.v4);
            do_action(defend, &defend->vs.v5);
            return do_action(defend, &defend->vs.v6);
        default:
            return find_nb3(defend);
    }
}

void find_nb3(defender_t *defend)
{
    if (defend->vs.ctr == 7) {
        do_action(defend, &defend->vs.v1);
        do_action(defend, &defend->vs.v2);
        do_action(defend, &defend->vs.v3);
        do_action(defend, &defend->vs.v4);
        do_action(defend, &defend->vs.v5);
        do_action(defend, &defend->vs.v6);
        return do_action(defend, &defend->vs.v7);
    }
    if (defend->vs.ctr == 8) {
        do_action(defend, &defend->vs.v1);
        do_action(defend, &defend->vs.v2);
        do_action(defend, &defend->vs.v3);
        do_action(defend, &defend->vs.v4);
        do_action(defend, &defend->vs.v5);
        do_action(defend, &defend->vs.v6);
        do_action(defend, &defend->vs.v7);
        return do_action(defend, &defend->vs.v8);
    }
    return find_nb4(defend);
}

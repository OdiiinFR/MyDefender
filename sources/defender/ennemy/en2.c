/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** en2
*/

#include "defender.h"

void find_vs3(defender_t *defend, int x, int y, int type)
{
    switch (defend->vs.ctr) {
        case 8:
            defend->vs.v9 = new_ennemy(type, x, y, defend);
            defend->vs.ctr += 1;
            return;
        case 9:
            defend->vs.v10 = new_ennemy(type, x, y, defend);
            defend->vs.ctr += 1;
            return;
        case 10:
            defend->vs.v11 = new_ennemy(type, x, y, defend);
            defend->vs.ctr += 1;
            return;
        case 11:
            defend->vs.v12 = new_ennemy(type, x, y, defend);
            defend->vs.ctr += 1;
            return;
        default:
            return find_vs4(defend, x, y, type);
    }
}

void find_vs4(defender_t *defend, int x, int y, int type)
{
    switch (defend->vs.ctr) {
        case 12:
            defend->vs.v13 = new_ennemy(type, x, y, defend);
            defend->vs.ctr += 1;
            return;
        case 15:
            defend->vs.v16 = new_ennemy(type, x, y, defend);
            defend->vs.ctr += 1;
            return;
        case 13:
            defend->vs.v14 = new_ennemy(type, x, y, defend);
            defend->vs.ctr += 1;
            return;
        case 14:
            defend->vs.v15 = new_ennemy(type, x, y, defend);
            defend->vs.ctr += 1;
            return;
        default:
            return;
    }
}

float find_hp(defender_t *defend)
{
    float nb = defend->vs.v1.hp;

    if (defend->vs.ctr == 1)
        return nb;
    if (defend->vs.ctr == 2) {
        nb += defend->vs.v2.hp;
        return nb;
    }
    if (defend->vs.ctr == 3) {
        nb += defend->vs.v2.hp + defend->vs.v3.hp;
        return nb;
    }
    if (defend->vs.ctr == 4) {
        nb += defend->vs.v2.hp + defend->vs.v3.hp + defend->vs.v4.hp;
        return nb;
    }
    return find_hp2(defend, nb);
}

int set_win_fen(defender_t *defend)
{
    if (find_hp(defend) <= 0) {
        defend->fen = 10;
        return 1;
    }
    return 0;
}

int check_win(defender_t *defend)
{
    if (defend->map == 0 && defend->wave.ctr == defend->wave.len1) {
        if (set_win_fen(defend) == 1)
            return 1;
    }
    if (defend->map == 1 && defend->wave.ctr == defend->wave.len2) {
        if (set_win_fen(defend) == 1)
            return 1;
    }
    if (defend->map == 2 && defend->wave.ctr == defend->wave.len3) {
        if (set_win_fen(defend) == 1)
            return 1;
    }
    if (defend->map == 3 && defend->wave.ctr == defend->wave.len4) {
        if (set_win_fen(defend) == 1)
            return 1;
    }
    return 0;
}

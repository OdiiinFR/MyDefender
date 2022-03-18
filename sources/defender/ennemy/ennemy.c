/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** ennemy
*/

#include "defender.h"

void do_ennemy(defender_t *defend)
{
    if (defend->ctr == 20) {
        check_wave(defend);
        defend->ctr = 0;
    }
    if (check_win(defend) != 0)
        return;
    moove_ennemy(defend);
    return;
}

void check_wave(defender_t *defend)
{
    int nb1;
    int nb2;

    if (defend->map == 0 && defend->wave.ctr < defend->wave.len1) {
        defend->angle = 1;
        nb1 = defend->wave.wavelvl1[defend->wave.ctr] - 48;
        if (nb1 != 0)
            find_vs(defend, 240, 970, nb1);
        defend->wave.ctr += 1;
    }
    if (defend->map == 1 && defend->wave.ctr < defend->wave.len2) {
        nb2 = defend->wave.wavelvl2[defend->wave.ctr] - 48;
        defend->angle = 0;
        if (nb2 != 0)
            find_vs(defend, 0, 735, nb2);
        defend->wave.ctr += 1;
    }
    return check_wave2(defend);
}

void check_wave2(defender_t *defend)
{
    int nb3;
    int nb4;

    if (defend->map == 2 && defend->wave.ctr < defend->wave.len3) {
        nb3 = defend->wave.wavelvl3[defend->wave.ctr] - 48;
        defend->angle = 0;
        if (nb3 != 0)
            find_vs(defend, 0, 150, nb3);
        defend->wave.ctr += 1;
    }
    if (defend->map == 3 && defend->wave.ctr < defend->wave.len4) {
        nb4 = defend->wave.wavelvl4[defend->wave.ctr] - 48;
        defend->angle = 3;
        if (nb4 != 0)
            find_vs(defend, 150, 0, nb4);
        defend->wave.ctr += 1;
    }
    return wave_file(defend);
}

void find_vs(defender_t *defend, int x, int y, int type)
{
    switch (defend->vs.ctr) {
        case 0:
            defend->vs.v1 = new_ennemy(type, x, y, defend);
            defend->vs.ctr += 1;
            return;
        case 1:
            defend->vs.v2 = new_ennemy(type, x, y, defend);
            defend->vs.ctr += 1;
            return;
        case 2:
            defend->vs.v3 = new_ennemy(type, x, y, defend);
            defend->vs.ctr += 1;
            return;
        case 3:
            defend->vs.v4 = new_ennemy(type, x, y, defend);
            defend->vs.ctr += 1;
            return;
        default:
            return find_vs2(defend, x, y, type);
    }
}

void find_vs2(defender_t *defend, int x, int y, int type)
{
    switch (defend->vs.ctr) {
        case 4:
            defend->vs.v5 = new_ennemy(type, x, y, defend);
            defend->vs.ctr += 1;
            return;
        case 5:
            defend->vs.v6 = new_ennemy(type, x, y, defend);
            defend->vs.ctr += 1;
            return;
        case 6:
            defend->vs.v7 = new_ennemy(type, x, y, defend);
            defend->vs.ctr += 1;
            return;
        case 7:
            defend->vs.v8 = new_ennemy(type, x, y, defend);
            defend->vs.ctr += 1;
            return;
        default:
            return find_vs3(defend, x, y, type);
    }
}

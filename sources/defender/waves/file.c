/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** file
*/

#include "defender.h"

wave_t set_wave2(wave_t new)
{
    new.ctr = 0;
    return new;
}

void wave_file2(defender_t *defend, int *x, int *y)
{
    if (defend->map = 0) {
        *x = 240;
        *y = 970;
        defend->angle = 1;
    }
    if (defend->map = 1) {
        *x = 0;
        *y = 735;
        defend->angle = 0;
    }
    if (defend->map = 2) {
        *x = 0;
        *y = 150;
        defend->angle = 0;
    }
    if (defend->map = 3) {
        *x = 150;
        *y = 0;
        defend->angle = 3;
    }
}

void wave_file(defender_t *defend)
{
    int nb1;
    int x = 0;
    int y = 0;

    if (defend->wave.map == 10 && defend->wave.ctr < defend->wave.len5) {
        wave_file2(defend, &x, &y);
        nb1 = defend->wave.wavefile[defend->wave.ctr] - 48;
        if (nb1 != 0)
            find_vs(defend, x, y, nb1);
        defend->wave.ctr += 1;
    }
    return;
}
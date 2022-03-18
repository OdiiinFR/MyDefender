/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** setgame
*/

#include "defender.h"

void set_0(defender_t *defend)
{
    defend->all.t1.focus = 0;
    defend->all.t2.focus = 0;
    defend->all.t3.focus = 0;
    defend->all.t4.focus = 0;
    defend->all.t5.focus = 0;
    defend->all.t6.focus = 0;
    defend->all.t7.focus = 0;
    defend->all.t8.focus = 0;
    defend->hp = 1000;
    return;
}

void set_game(defender_t *defend)
{
    defend->vs.ctr = 0;
    defend->hud = 21;
    defend->inv.qty1 = 0;
    defend->inv.qty2 = 0;
    defend->inv.qty3 = 0;
    defend->inv.qty4 = 0;
    defend->tree.buy1 = 0;
    defend->tree.buy2 = 0;
    defend->tree.buy3 = 0;
    defend->tree.buy4 = 0;
    defend->tree.buy5 = 0;
    defend->tree.buy6 = 0;
    defend->money = 100;
    defend->wave.ctr = 0;
    defend->ctr = 0;
    for (int i = 0; i != 8; i += 1)
        defend->towers[i] = 1;
    set_0(defend);
    return;
}

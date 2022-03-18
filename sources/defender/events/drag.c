/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** drag
*/

#include "defender.h"

void drag1(defender_t *defend, sfVector2f w, char *path1, char *path2)
{
    if (w.x > 557 && w.x < 639 && w.y > 900 && w.y < 1004)
        defend->tower = 1;
    if (defend->tower == 1 && defend->inv.qty1 > 0) {
        print_sprite(defend, (w.x - 30), (w.y - 30), path1);
        defend->drop.x = w.x;
        defend->drop.y = w.y;
    }
    if (w.x > 700 && w.x < 770 && w.y > 900 && w.y < 984)
        defend->tower = 2;
    if (defend->tower == 2 && defend->inv.qty2 > 0) {
        print_sprite(defend, (w.x - 30), (w.y - 30), path2);
        defend->drop.x = w.x;
        defend->drop.y = w.y;
    }
    return;
}

void drag2(defender_t *defend, sfVector2f w, char *path3, char *path4)
{
    if (w.x > 1120 && w.x < 1179 && w.y > 910 && w.y < 987)
        defend->tower = 3;
    if (defend->tower == 3 && defend->inv.qty3 > 0) {
        print_sprite(defend, (w.x - 15), (w.y - 15), path3);
        defend->drop.x = w.x;
        defend->drop.y = w.y;
    }
    if (w.x > 1270 && w.x < 1318 && w.y > 920 && w.y < 986)
        defend->tower = 4;
    if (defend->tower == 4 && defend->inv.qty4 > 0) {
        print_sprite(defend, (w.x - 15), (w.y - 15), path4);
        defend->drop.x = w.x;
        defend->drop.y = w.y;
    }
    return;
}

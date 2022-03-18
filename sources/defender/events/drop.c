/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** drop
*/

#include "defender.h"

void do_drop(defender_t *defend)
{
    sfVector2i a = sfMouse_getPositionRenderWindow(defend->window);
    sfVector2f w = sfRenderWindow_mapPixelToCoords(defend->window, a, NULL);
    char path1[22] = "images/inv_tower1.png";
    char path2[22] = "images/inv_tower2.png";
    char path3[22] = "images/inv_tower3.png";
    char path4[22] = "images/inv_tower4.png";

    if (defend->mouse == 1) {
        drag1(defend, w, path1, path2);
        drag2(defend, w, path3, path4);
    }
    if (defend->drop.x != 0 && defend->mouse == 0) {
        defend->map == 0 ? drop_map0(defend) : 0;
        defend->map == 1 ? drop_map1(defend) : 0;
        defend->map == 2 ? drop_map2(defend) : 0;
        defend->map == 3 ? drop_map3(defend) : 0;
    }
    return;
}

void drop_map0(defender_t *defend)
{
    if (defend->tower == 1)
        find_pos_tower1_1(defend);
    if (defend->tower == 2)
        find_pos_tower1_2(defend);
    if (defend->tower == 3)
        find_pos_tower1_3(defend);
    if (defend->tower == 4)
        find_pos_tower1_4(defend);
    defend->tower = 5;
    return;
}

void drop_map1(defender_t *defend)
{
    if (defend->tower == 1)
        find_pos_tower2_1(defend);
    if (defend->tower == 2)
        find_pos_tower2_2(defend);
    if (defend->tower == 3)
        find_pos_tower2_3(defend);
    if (defend->tower == 4)
        find_pos_tower2_4(defend);
    defend->tower = 5;
    return;
}

void drop_map2(defender_t *defend)
{
    if (defend->tower == 1)
        find_pos_tower3_1(defend);
    if (defend->tower == 2)
        find_pos_tower3_2(defend);
    if (defend->tower == 3)
        find_pos_tower3_3(defend);
    if (defend->tower == 4)
        find_pos_tower3_4(defend);
    defend->tower = 5;
    return;
}

void drop_map3(defender_t *defend)
{
    if (defend->tower == 1)
        find_pos_tower4_1(defend);
    if (defend->tower == 2)
        find_pos_tower4_2(defend);
    if (defend->tower == 3)
        find_pos_tower4_3(defend);
    if (defend->tower == 4)
        find_pos_tower4_4(defend);
    defend->tower = 5;
    return;
}

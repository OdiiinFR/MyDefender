/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** drop_map3_2
*/

#include "defender.h"

void find_pos_tower4_2_3(defender_t *dfnd)
{
    sfVector2f pos1 = {1250, 290};
    sfVector2f pos2 = {1500, 470};

    if (dfnd->drop.x > 1250 && dfnd->drop.x < 1366 &&
        dfnd->drop.y < 405 && dfnd->drop.y > 290) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[6] = 0;
        dfnd->all.t7 = new_tower(2, "images/tower/tower2_1.png", pos1, dfnd);
    }
    if (dfnd->drop.x > 1500 && dfnd->drop.x < 1616 &&
        dfnd->drop.y < 585 && dfnd->drop.y > 470) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[7] = 0;
        dfnd->all.t8 = new_tower(2, "images/tower/tower2_1.png", pos2, dfnd);
    }
}

void find_pos_tower4_2_2(defender_t *dfnd)
{
    sfVector2f pos1 = {855, 535};
    sfVector2f pos2 = {680, 310};

    if (dfnd->drop.x > 855 && dfnd->drop.x < 971 &&
        dfnd->drop.y < 650 && dfnd->drop.y > 535) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[4] = 0;
        dfnd->all.t5 = new_tower(2, "images/tower/tower2_1.png", pos1, dfnd);
    }
    if (dfnd->drop.x > 680 && dfnd->drop.x < 796 &&
        dfnd->drop.y < 425 && dfnd->drop.y > 310) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[5] = 0;
        dfnd->all.t6 = new_tower(2, "images/tower/tower2_1.png", pos2, dfnd);
    }
    find_pos_tower4_2_3(dfnd);
}

void find_pos_tower4_2_1(defender_t *dfnd)
{
    sfVector2f pos1 = {820, 880};
    sfVector2f pos2 = {1060, 750};

    if (dfnd->drop.x > 820 && dfnd->drop.x < 936 &&
        dfnd->drop.y < 995 && dfnd->drop.y > 880) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[2] = 0;
        dfnd->all.t3 = new_tower(2, "images/tower/tower2_1.png", pos1, dfnd);
    }
    if (dfnd->drop.x > 1060 && dfnd->drop.x < 1176 &&
        dfnd->drop.y < 865 && dfnd->drop.y > 750) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[3] = 0;
        dfnd->all.t4 = new_tower(2, "images/tower/tower2_1.png", pos2, dfnd);
    }
    find_pos_tower4_2_2(dfnd);
}

void find_pos_tower4_2(defender_t *dfnd)
{
    sfVector2f pos1 = {60, 310};
    sfVector2f pos2 = {270, 660};

    if (dfnd->drop.x > 60 && dfnd->drop.x < 176 &&
        dfnd->drop.y < 424 && dfnd->drop.y > 310) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[0] = 0;
        dfnd->all.t1 = new_tower(2, "images/tower/tower2_1.png", pos1, dfnd);
    }
    if (dfnd->drop.x > 270 && dfnd->drop.x < 386 &&
        dfnd->drop.y < 774 && dfnd->drop.y > 660) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[1] = 0;
        dfnd->all.t2 = new_tower(2, "images/tower/tower2_1.png", pos2, dfnd);
    }
    find_pos_tower4_2_1(dfnd);
}

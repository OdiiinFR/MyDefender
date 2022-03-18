/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** drop_map2_2
*/

#include "defender.h"

void find_pos_tower3_2_3(defender_t *dfnd)
{
    sfVector2f pos1 = {1370, 250};
    sfVector2f pos2 = {1570, 710};

    if (dfnd->drop.x > 1370 && dfnd->drop.x < 1486 &&
        dfnd->drop.y < 365 && dfnd->drop.y > 250) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[6] = 0;
        dfnd->all.t7 = new_tower(2, "images/tower/tower2_1.png", pos1, dfnd);
    }
    if (dfnd->drop.x > 1570 && dfnd->drop.x < 1686 &&
        dfnd->drop.y < 824 && dfnd->drop.y > 710) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[7] = 0;
        dfnd->all.t8 = new_tower(2, "images/tower/tower2_1.png", pos2, dfnd);
    }
}

void find_pos_tower3_2_2(defender_t *dfnd)
{
    sfVector2f pos1 = {975, 300};
    sfVector2f pos2 = {1240, 50};

    if (dfnd->drop.x > 975 && dfnd->drop.x < 1106 &&
        dfnd->drop.y < 415 && dfnd->drop.y > 300) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[4] = 0;
        dfnd->all.t5 = new_tower(2, "images/tower/tower2_1.png", pos1, dfnd);
    }
    if (dfnd->drop.x > 1240 && dfnd->drop.x < 1356 &&
        dfnd->drop.y < 164 && dfnd->drop.y > 50) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[5] = 0;
        dfnd->all.t6 = new_tower(2, "images/tower/tower2_1.png", pos2, dfnd);
    }
    find_pos_tower3_2_3(dfnd);
}

void find_pos_tower3_2_1(defender_t *dfnd)
{
    sfVector2f pos1 = {700, 770};
    sfVector2f pos2 = {910, 520};

    if (dfnd->drop.x > 700 && dfnd->drop.x < 816 &&
        dfnd->drop.y < 845 && dfnd->drop.y > 770) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[2] = 0;
        dfnd->all.t3 = new_tower(2, "images/tower/tower2_1.png", pos1, dfnd);
    }
    if (dfnd->drop.x > 910 && dfnd->drop.x < 1026 &&
        dfnd->drop.y < 635 && dfnd->drop.y > 520) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[3] = 0;
        dfnd->all.t4 = new_tower(2, "images/tower/tower2_1.png", pos2, dfnd);
    }
    find_pos_tower3_2_2(dfnd);
}

void find_pos_tower3_2(defender_t *dfnd)
{
    sfVector2f pos1 = {260, 240};
    sfVector2f pos2 = {470, 630};

    if (dfnd->drop.x > 260 && dfnd->drop.x < 376 &&
        dfnd->drop.y < 355 && dfnd->drop.y > 240) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[0] = 0;
        dfnd->all.t1 = new_tower(2, "images/tower/tower2_1.png", pos1, dfnd);
    }
    if (dfnd->drop.x > 470 && dfnd->drop.x < 586 &&
        dfnd->drop.y < 745 && dfnd->drop.y > 630) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[1] = 0;
        dfnd->all.t2 = new_tower(2, "images/tower/tower2_1.png", pos2, dfnd);
    }
    find_pos_tower3_2_1(dfnd);
}

/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** drop_map1_3
*/

#include "defender.h"

void find_pos_tower2_3_2(defender_t *dfnd)
{
    sfVector2f pos1 = {990, 420};
    sfVector2f pos2 = {1400, 620};

    if (dfnd->drop.x > 990 && dfnd->drop.x < 1106 &&
        dfnd->drop.y < 534 && dfnd->drop.y > 420) {
        dfnd->inv.qty3 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[4] = 0;
        dfnd->all.t5 = new_tower(3, "images/tower/tower3_1.png", pos1, dfnd);
    }
    if (dfnd->drop.x > 1400 && dfnd->drop.x < 1516 &&
        dfnd->drop.y < 734 && dfnd->drop.y > 620) {
        dfnd->inv.qty3 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[5] = 0;
        dfnd->all.t6 = new_tower(3, "images/tower/tower3_1.png", pos2, dfnd);
    }
}

void find_pos_tower2_3_1(defender_t *dfnd)
{
    sfVector2f pos1 = {540, 425};
    sfVector2f pos2 = {750, 210};

    if (dfnd->drop.x > 540 && dfnd->drop.x < 656 &&
        dfnd->drop.y < 539 && dfnd->drop.y > 425) {
        dfnd->inv.qty3 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[2] = 0;
        dfnd->all.t3 = new_tower(3, "images/tower/tower3_1.png", pos1, dfnd);
    }
    if (dfnd->drop.x > 750 && dfnd->drop.x < 866 &&
        dfnd->drop.y < 324 && dfnd->drop.y > 210) {
        dfnd->inv.qty3 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[3] = 0;
        dfnd->all.t4 = new_tower(3, "images/tower/tower3_1.png", pos2, dfnd);
    }
    find_pos_tower2_3_2(dfnd);
}

void find_pos_tower2_3(defender_t *dfnd)
{
    sfVector2f pos1 = {470, 690};
    sfVector2f pos2 = {250, 390};

    if (dfnd->drop.x > 470 && dfnd->drop.x < 586 &&
        dfnd->drop.y < 804 && dfnd->drop.y > 690) {
        dfnd->inv.qty3 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[0] = 0;
        dfnd->all.t1 = new_tower(3, "images/tower/tower3_1.png", pos1, dfnd);
    }
    if (dfnd->drop.x > 250 && dfnd->drop.x < 366 &&
        dfnd->drop.y < 504 && dfnd->drop.y > 390) {
        dfnd->inv.qty3 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[1] = 0;
        dfnd->all.t2 = new_tower(3, "images/tower/tower3_1.png", pos2, dfnd);
    }
    find_pos_tower2_3_1(dfnd);
}

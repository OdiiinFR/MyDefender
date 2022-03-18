/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** drop0_2
*/

#include "defender.h"

void find_pos_tower1_2_1(defender_t *dfnd)
{
    sfVector2f pos1 = {1100, 200};
    sfVector2f pos2 = {1440, 620};

    if (dfnd->drop.x > 1100 && dfnd->drop.x < 1266 &&
        dfnd->drop.y < 364 && dfnd->drop.y > 200) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[2] = 0;
        dfnd->all.t3 = new_tower(2, "images/tower/tower2_1.png", pos1, dfnd);
    }
    if (dfnd->drop.x > 1440 && dfnd->drop.x < 1606 &&
        dfnd->drop.y < 784 && dfnd->drop.y > 620) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[3] = 0;
        dfnd->all.t4 = new_tower(2, "images/tower/tower2_1.png", pos2, dfnd);
    }
}

void find_pos_tower1_2(defender_t *dfnd)
{
    sfVector2f pos1 = {300, 200};
    sfVector2f pos2 = {650, 490};

    if (dfnd->drop.x > 299 && dfnd->drop.x < 500 &&
        dfnd->drop.y < 400 && dfnd->drop.y > 200) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[0] = 0;
        dfnd->all.t1 = new_tower(2, "images/tower/tower2_1.png", pos1, dfnd);
    }
    if (dfnd->drop.x > 650 && dfnd->drop.x < 816 &&
        dfnd->drop.y < 644 && dfnd->drop.y > 490) {
        dfnd->inv.qty2 -= 1;
        dfnd->drop.x = 0;
        dfnd->drop.y = 0;
        dfnd->towers[1] = 0;
        dfnd->all.t2 = new_tower(2, "images/tower/tower2_1.png", pos2, dfnd);
    }
    find_pos_tower1_2_1(dfnd);
}

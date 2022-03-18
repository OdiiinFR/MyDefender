/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** detect_map3
*/

#include "defender.h"

void detect_map3(defender_t *dfnd)
{
    sfVector2f scale1 = {310, 300};
    sfVector2f scale2 = {490, 680};

    if (dfnd->towers[0] == 0) {
        dfnd->all.t1.focus = 0;
        dfnd->all.t1.type == 1 ? in_circle(scale1, 300, dfnd, 0) : 0;
        dfnd->all.t1.type == 2 ? in_circle(scale1, 350, dfnd, 0) : 0;
        dfnd->all.t1.type == 3 ? in_circle(scale1, 400, dfnd, 0) : 0;
        dfnd->all.t1.type == 4 ? in_circle(scale1, 450, dfnd, 0) : 0;
    }
    if (dfnd->towers[1] == 0) {
        dfnd->all.t2.focus = 0;
        dfnd->all.t2.type == 1 ? in_circle(scale2, 300, dfnd, 1) : 0;
        dfnd->all.t2.type == 2 ? in_circle(scale2, 350, dfnd, 1) : 0;
        dfnd->all.t2.type == 3 ? in_circle(scale2, 400, dfnd, 1) : 0;
        dfnd->all.t2.type == 4 ? in_circle(scale2, 450, dfnd, 1) : 0;
    }
    detect_map3_1(dfnd);
}

void detect_map3_1(defender_t *dfnd)
{
    sfVector2f scale1 = {740, 840};
    sfVector2f scale2 = {940, 570};

    if (dfnd->towers[2] == 0) {
        dfnd->all.t3.focus = 0;
        dfnd->all.t3.type == 1 ? in_circle(scale1, 300, dfnd, 2) : 0;
        dfnd->all.t3.type == 2 ? in_circle(scale1, 350, dfnd, 2) : 0;
        dfnd->all.t3.type == 3 ? in_circle(scale1, 400, dfnd, 2) : 0;
        dfnd->all.t3.type == 4 ? in_circle(scale1, 450, dfnd, 2) : 0;
    }
    if (dfnd->towers[3] == 0) {
        dfnd->all.t4.focus = 0;
        dfnd->all.t4.type == 1 ? in_circle(scale2, 300, dfnd, 3) : 0;
        dfnd->all.t4.type == 2 ? in_circle(scale2, 350, dfnd, 3) : 0;
        dfnd->all.t4.type == 3 ? in_circle(scale2, 400, dfnd, 3) : 0;
        dfnd->all.t4.type == 4 ? in_circle(scale2, 450, dfnd, 3) : 0;
    }
    detect_map3_2(dfnd);
}

void detect_map3_2(defender_t *dfnd)
{
    sfVector2f scale1 = {1010, 360};
    sfVector2f scale2 = {1280, 120};

    if (dfnd->towers[4] == 0) {
        dfnd->all.t5.focus = 0;
        dfnd->all.t5.type == 1 ? in_circle(scale1, 300, dfnd, 4) : 0;
        dfnd->all.t5.type == 2 ? in_circle(scale1, 350, dfnd, 4) : 0;
        dfnd->all.t5.type == 3 ? in_circle(scale1, 400, dfnd, 4) : 0;
        dfnd->all.t5.type == 4 ? in_circle(scale1, 450, dfnd, 4) : 0;
    }
    if (dfnd->towers[5] == 0) {
        dfnd->all.t6.focus = 0;
        dfnd->all.t6.type == 1 ? in_circle(scale2, 300, dfnd, 5) : 0;
        dfnd->all.t6.type == 2 ? in_circle(scale2, 350, dfnd, 5) : 0;
        dfnd->all.t6.type == 3 ? in_circle(scale2, 400, dfnd, 5) : 0;
        dfnd->all.t6.type == 4 ? in_circle(scale2, 450, dfnd, 5) : 0;
    }
    detect_map3_3(dfnd);
}

void detect_map3_3(defender_t *dfnd)
{
    sfVector2f scale1 = {1400, 310};
    sfVector2f scale2 = {1600, 750};

    if (dfnd->towers[6] == 0) {
        dfnd->all.t7.focus = 0;
        dfnd->all.t7.type == 1 ? in_circle(scale1, 300, dfnd, 4) : 0;
        dfnd->all.t7.type == 2 ? in_circle(scale1, 350, dfnd, 4) : 0;
        dfnd->all.t7.type == 3 ? in_circle(scale1, 400, dfnd, 4) : 0;
        dfnd->all.t7.type == 4 ? in_circle(scale1, 450, dfnd, 4) : 0;
    }
    if (dfnd->towers[7] == 0) {
        dfnd->all.t8.focus = 0;
        dfnd->all.t8.type == 1 ? in_circle(scale2, 300, dfnd, 5) : 0;
        dfnd->all.t8.type == 2 ? in_circle(scale2, 350, dfnd, 5) : 0;
        dfnd->all.t8.type == 3 ? in_circle(scale2, 400, dfnd, 5) : 0;
        dfnd->all.t8.type == 4 ? in_circle(scale2, 450, dfnd, 5) : 0;
    }
}

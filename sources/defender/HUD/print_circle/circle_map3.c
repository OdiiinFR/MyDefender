/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** circle_map3
*/

#include "defender.h"

void circle_map3(defender_t *defend)
{
    if (defend->towers[0] == 0) {
        defend->all.t1.type == 1 ? draw_circle(110, 90, 300, defend) : 0;
        defend->all.t1.type == 2 ? draw_circle(60, 40, 350, defend) : 0;
        defend->all.t1.type == 3 ? draw_circle(10, -10, 400, defend) : 0;
        defend->all.t1.type == 4 ? draw_circle(-40, -60, 450, defend) : 0;
    }
    if (defend->towers[1] == 0) {
        defend->all.t2.type == 1 ? draw_circle(320, 480, 300, defend) : 0;
        defend->all.t2.type == 2 ? draw_circle(270, 430, 350, defend) : 0;
        defend->all.t2.type == 3 ? draw_circle(220, 380, 400, defend) : 0;
        defend->all.t2.type == 4 ? draw_circle(170, 330, 450, defend) : 0;
    }
    circle_map3_1(defend);
}

void circle_map3_1(defender_t *defend)
{
    if (defend->towers[2] == 0) {
        defend->all.t3.type == 1 ? draw_circle(550, 620, 300, defend) : 0;
        defend->all.t3.type == 2 ? draw_circle(500, 570, 350, defend) : 0;
        defend->all.t3.type == 3 ? draw_circle(450, 520, 400, defend) : 0;
        defend->all.t3.type == 4 ? draw_circle(400, 470, 450, defend) : 0;
    }
    if (defend->towers[3] == 0) {
        defend->all.t4.type == 1 ? draw_circle(760, 370, 300, defend) : 0;
        defend->all.t4.type == 2 ? draw_circle(710, 320, 350, defend) : 0;
        defend->all.t4.type == 3 ? draw_circle(660, 270, 400, defend) : 0;
        defend->all.t4.type == 4 ? draw_circle(610, 220, 450, defend) : 0;
    }
    circle_map3_2(defend);
}

void circle_map3_2(defender_t *defend)
{
    if (defend->towers[4] == 0) {
        defend->all.t5.type == 1 ? draw_circle(825, 150, 300, defend) : 0;
        defend->all.t5.type == 2 ? draw_circle(775, 100, 350, defend) : 0;
        defend->all.t5.type == 3 ? draw_circle(725, 50, 400, defend) : 0;
        defend->all.t5.type == 4 ? draw_circle(675, 0, 450, defend) : 0;
    }
    if (defend->towers[5] == 0) {
        defend->all.t6.type == 1 ? draw_circle(1090, -100, 300, defend) : 0;
        defend->all.t6.type == 2 ? draw_circle(1040, -150, 350, defend) : 0;
        defend->all.t6.type == 3 ? draw_circle(990, -200, 400, defend) : 0;
        defend->all.t6.type == 4 ? draw_circle(940, -250, 450, defend) : 0;
    }
    circle_map3_3(defend);
}

void circle_map3_3(defender_t *defend)
{
    if (defend->towers[6] == 0) {
        defend->all.t7.type == 1 ? draw_circle(1220, 100, 300, defend) : 0;
        defend->all.t7.type == 2 ? draw_circle(1170, 50, 350, defend) : 0;
        defend->all.t7.type == 3 ? draw_circle(1120, 0, 400, defend) : 0;
        defend->all.t7.type == 4 ? draw_circle(1070, -50, 450, defend) : 0;
    }
    if (defend->towers[7] == 0) {
        defend->all.t8.type == 1 ? draw_circle(1420, 560, 300, defend) : 0;
        defend->all.t8.type == 2 ? draw_circle(1370, 510, 350, defend) : 0;
        defend->all.t8.type == 3 ? draw_circle(1320, 460, 400, defend) : 0;
        defend->all.t8.type == 4 ? draw_circle(1270, 410, 450, defend) : 0;
    }
}

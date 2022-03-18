/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** circle_map4
*/

#include "defender.h"

void circle_map4(defender_t *defend)
{
    if (defend->towers[0] == 0) {
        defend->all.t1.type == 1 ? draw_circle(-90, 160, 300, defend) : 0;
        defend->all.t1.type == 2 ? draw_circle(-140, 110, 350, defend) : 0;
        defend->all.t1.type == 3 ? draw_circle(-190, 60, 400, defend) : 0;
        defend->all.t1.type == 4 ? draw_circle(-240, 10, 450, defend) : 0;
    }
    if (defend->towers[1] == 0) {
        defend->all.t2.type == 1 ? draw_circle(120, 510, 300, defend) : 0;
        defend->all.t2.type == 2 ? draw_circle(70, 460, 350, defend) : 0;
        defend->all.t2.type == 3 ? draw_circle(20, 410, 400, defend) : 0;
        defend->all.t2.type == 4 ? draw_circle(-30, 360, 450, defend) : 0;
    }
    circle_map4_1(defend);
}

void circle_map4_1(defender_t *defend)
{
    if (defend->towers[2] == 0) {
        defend->all.t3.type == 1 ? draw_circle(670, 730, 300, defend) : 0;
        defend->all.t3.type == 2 ? draw_circle(620, 680, 350, defend) : 0;
        defend->all.t3.type == 3 ? draw_circle(570, 630, 400, defend) : 0;
        defend->all.t3.type == 4 ? draw_circle(520, 580, 450, defend) : 0;
    }
    if (defend->towers[3] == 0) {
        defend->all.t4.type == 1 ? draw_circle(910, 600, 300, defend) : 0;
        defend->all.t4.type == 2 ? draw_circle(860, 550, 350, defend) : 0;
        defend->all.t4.type == 3 ? draw_circle(810, 500, 400, defend) : 0;
        defend->all.t4.type == 4 ? draw_circle(760, 450, 450, defend) : 0;
    }
    circle_map4_2(defend);
}

void circle_map4_2(defender_t *defend)
{
    if (defend->towers[4] == 0) {
        defend->all.t5.type == 1 ? draw_circle(705, 385, 300, defend) : 0;
        defend->all.t5.type == 2 ? draw_circle(655, 335, 350, defend) : 0;
        defend->all.t5.type == 3 ? draw_circle(605, 285, 400, defend) : 0;
        defend->all.t5.type == 4 ? draw_circle(555, 235, 450, defend) : 0;
    }
    if (defend->towers[5] == 0) {
        defend->all.t6.type == 1 ? draw_circle(530, 160, 300, defend) : 0;
        defend->all.t6.type == 2 ? draw_circle(480, 110, 350, defend) : 0;
        defend->all.t6.type == 3 ? draw_circle(430, 60, 400, defend) : 0;
        defend->all.t6.type == 4 ? draw_circle(380, 10, 450, defend) : 0;
    }
    circle_map4_3(defend);
}

void circle_map4_3(defender_t *defend)
{
    if (defend->towers[6] == 0) {
        defend->all.t7.type == 1 ? draw_circle(1100, 140, 300, defend) : 0;
        defend->all.t7.type == 2 ? draw_circle(1050, 90, 350, defend) : 0;
        defend->all.t7.type == 3 ? draw_circle(1000, 40, 400, defend) : 0;
        defend->all.t7.type == 4 ? draw_circle(950, -10, 450, defend) : 0;
    }
    if (defend->towers[7] == 0) {
        defend->all.t8.type == 1 ? draw_circle(1350, 320, 300, defend) : 0;
        defend->all.t8.type == 2 ? draw_circle(1300, 270, 350, defend) : 0;
        defend->all.t8.type == 3 ? draw_circle(1250, 220, 400, defend) : 0;
        defend->all.t8.type == 4 ? draw_circle(1200, 170, 450, defend) : 0;
    }
}

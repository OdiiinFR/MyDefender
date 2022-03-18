/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** circle_map2
*/

#include "defender.h"

void circle_map2(defender_t *defend)
{
    if (defend->towers[0] == 0) {
        defend->all.t1.type == 1 ? draw_circle(320, 540, 300, defend) : 0;
        defend->all.t1.type == 2 ? draw_circle(270, 490, 350, defend) : 0;
        defend->all.t1.type == 3 ? draw_circle(220, 440, 400, defend) : 0;
        defend->all.t1.type == 4 ? draw_circle(170, 390, 450, defend) : 0;
    }
    if (defend->towers[1] == 0) {
        defend->all.t2.type == 1 ? draw_circle(100, 240, 300, defend) : 0;
        defend->all.t2.type == 2 ? draw_circle(50, 190, 350, defend) : 0;
        defend->all.t2.type == 3 ? draw_circle(0, 140, 400, defend) : 0;
        defend->all.t2.type == 4 ? draw_circle(-50, 90, 450, defend) : 0;
    }
    circle_map2_1(defend);
}

void circle_map2_1(defender_t *defend)
{
    if (defend->towers[2] == 0) {
        defend->all.t3.type == 1 ? draw_circle(390, 275, 300, defend) : 0;
        defend->all.t3.type == 2 ? draw_circle(340, 225, 350, defend) : 0;
        defend->all.t3.type == 3 ? draw_circle(290, 175, 400, defend) : 0;
        defend->all.t3.type == 4 ? draw_circle(240, 125, 450, defend) : 0;
    }
    if (defend->towers[3] == 0) {
        defend->all.t4.type == 1 ? draw_circle(600, 60, 300, defend) : 0;
        defend->all.t4.type == 2 ? draw_circle(550, 10, 350, defend) : 0;
        defend->all.t4.type == 3 ? draw_circle(500, -40, 400, defend) : 0;
        defend->all.t4.type == 4 ? draw_circle(450, -90, 450, defend) : 0;
    }
    circle_map2_2(defend);
}

void circle_map2_2(defender_t *defend)
{
    if (defend->towers[4] == 0) {
        defend->all.t5.type == 1 ? draw_circle(840, 270, 300, defend) : 0;
        defend->all.t5.type == 2 ? draw_circle(790, 220, 350, defend) : 0;
        defend->all.t5.type == 3 ? draw_circle(740, 170, 400, defend) : 0;
        defend->all.t5.type == 4 ? draw_circle(690, 120, 450, defend) : 0;
    }
    if (defend->towers[5] == 0) {
        defend->all.t6.type == 1 ? draw_circle(1250, 470, 300, defend) : 0;
        defend->all.t6.type == 2 ? draw_circle(1200, 420, 350, defend) : 0;
        defend->all.t6.type == 3 ? draw_circle(1150, 370, 400, defend) : 0;
        defend->all.t6.type == 4 ? draw_circle(1100, 320, 450, defend) : 0;
    }
}

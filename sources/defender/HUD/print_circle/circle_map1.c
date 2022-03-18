/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** circle_map1
*/

#include "defender.h"

void circle_map1(defender_t *defend)
{
    if (defend->towers[0] == 0) {
        defend->all.t1.type == 1 ? draw_circle(150, 50, 300, defend) : 0;
        defend->all.t1.type == 2 ? draw_circle(100, 0, 350, defend) : 0;
        defend->all.t1.type == 3 ? draw_circle(50, -50, 400, defend) : 0;
        defend->all.t1.type == 4 ? draw_circle(0, -100, 450, defend) : 0;
    }
    if (defend->towers[1] == 0) {
        defend->all.t2.type == 1 ? draw_circle(500, 350, 300, defend) : 0;
        defend->all.t2.type == 2 ? draw_circle(450, 300, 350, defend) : 0;
        defend->all.t2.type == 3 ? draw_circle(400, 250, 400, defend) : 0;
        defend->all.t2.type == 4 ? draw_circle(350, 200, 450, defend) : 0;
    }
    circle_map1_1(defend);
}

void circle_map1_1(defender_t *defend)
{
    if (defend->towers[2] == 0) {
        defend->all.t3.type == 1 ? draw_circle(950, 100, 300, defend) : 0;
        defend->all.t3.type == 2 ? draw_circle(900, 50, 350, defend) : 0;
        defend->all.t3.type == 3 ? draw_circle(850, 0, 400, defend) : 0;
        defend->all.t3.type == 4 ? draw_circle(800, -50, 450, defend) : 0;
    }
    if (defend->towers[3] == 0) {
        defend->all.t4.type == 1 ? draw_circle(1300, 550, 300, defend) : 0;
        defend->all.t4.type == 2 ? draw_circle(1250, 500, 350, defend) : 0;
        defend->all.t4.type == 3 ? draw_circle(1200, 450, 400, defend) : 0;
        defend->all.t4.type == 4 ? draw_circle(1150, 400, 450, defend) : 0;
    }
}

void add_ctr(defender_t *defend)
{
    defend->all.t1.shoot += 1;
    defend->all.t2.shoot += 1;
    defend->all.t3.shoot += 1;
    defend->all.t4.shoot += 1;
    defend->all.t5.shoot += 1;
    defend->all.t6.shoot += 1;
    defend->all.t7.shoot += 1;
    defend->all.t8.shoot += 1;
    return;
}

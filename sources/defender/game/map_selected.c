/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** map_selected
*/

#include "defender.h"

void map_1(defender_t *defend, int lose, char *tower)
{
    print_sprite(defend, 0, 0, "maps/map1.png");
    tower[0] == 1 ? print_spr_scale(defend, 470, 690, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t1);
    tower[1] == 1 ? print_spr_scale(defend, 250, 390, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t2);
    tower[2] == 1 ? print_spr_scale(defend, 540, 425, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t3);
    tower[3] == 1 ? print_spr_scale(defend, 750, 210, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t4);
    tower[4] == 1 ? print_spr_scale(defend, 990, 420, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t5);
    tower[5] == 1 ? print_spr_scale(defend, 1400, 620, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t6);
    lose != 1 ? print_sprite(defend, 1750, 680, "images/reactor.png")
    : print_sprite(defend, 1770, 700, "images/reactor_remanant.png");
    return;
}

void map_2(defender_t *defend, int lose, char *tower)
{
    print_sprite(defend, 0, 0, "maps/map2.png");
    tower[0] == 1 ? print_spr_scale(defend, 260, 240, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t1);
    tower[1] == 1 ? print_spr_scale(defend, 470, 630, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t2);
    tower[2] == 1 ? print_spr_scale(defend, 700, 770, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t3);
    tower[3] == 1 ? print_spr_scale(defend, 910, 520, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t4);
    tower[4] == 1 ? print_spr_scale(defend, 975, 300, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t5);
    tower[5] == 1 ? print_spr_scale(defend, 1240, 50, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t6);
    tower[6] == 1 ? print_spr_scale(defend, 1370, 250, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t7);
    tower[7] == 1 ? print_spr_scale(defend, 1570, 710, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t8);
    lose != 1 ? print_sprite(defend, 1770, 600, "images/reactor.png")
    : print_sprite(defend, 1790, 600, "images/reactor_remanant.png");
    return;
}

void map_3(defender_t *defend, int lose, char *tower)
{
    print_sprite(defend, 0, 0, "maps/boss.png");
    tower[0] == 1 ? print_spr_scale(defend, 60, 310, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t1);
    tower[1] == 1 ? print_spr_scale(defend, 270, 660, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t2);
    tower[2] == 1 ? print_spr_scale(defend, 820, 880, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t3);
    tower[3] == 1 ? print_spr_scale(defend, 1060, 750, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t4);
    tower[4] == 1 ? print_spr_scale(defend, 855, 535, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t5);
    tower[5] == 1 ? print_spr_scale(defend, 680, 310, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t6);
    tower[6] == 1 ? print_spr_scale(defend, 1250, 290, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t7);
    tower[7] == 1 ? print_spr_scale(defend, 1500, 470, "images/tower_pl.png")
    : print_towers(defend, &defend->all.t8);
    lose != 1 ? print_sprite(defend, 1770, 570, "images/reactor.png")
    : print_sprite(defend, 1790, 570, "images/reactor_remanant.png");
    return;
}

void map_4(defender_t *defend, int lose, char *tower)
{
    print_sprite(defend, 0, 0, "maps/tuto.png");
    tower[0] == 1 ? print_sprite(defend, 300, 200, "images/tower_pl.png")
    : print_tower(defend, &defend->all.t1);
    tower[1] == 1 ? print_sprite(defend, 650, 490, "images/tower_pl.png")
    : print_tower(defend, &defend->all.t2);
    tower[2] == 1 ? print_sprite(defend, 1100, 200, "images/tower_pl.png")
    : print_tower(defend, &defend->all.t3);
    tower[3] == 1 ? print_sprite(defend, 1440, 620, "images/tower_pl.png")
    : print_tower(defend, &defend->all.t4);
    lose != 1 ? print_sprite(defend, 1770, 750, "images/reactor.png")
    : print_sprite(defend, 1790, 770, "images/reactor_remanant.png");
    return;
}

void print_towers(defender_t *defend, tower_t *tower)
{
    sfVector2f scale = {0.7, 0.7};

    sfSprite_setScale(tower->spr, scale);
    sfSprite_setTextureRect(tower->spr, tower->rect);
    sfRenderWindow_drawSprite(defend->window, tower->spr, NULL);
    twr_upgrade(tower, defend);
}

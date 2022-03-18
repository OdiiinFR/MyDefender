/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** set_defend
*/

#include "defender.h"

defender_t set_part3(defender_t new, char *str)
{
    new.anim = 0;
    new.enn = new_anim();
    new.hp = 1000;
    return new;
}

defender_t set_part2(defender_t new, char *str)
{
    sfVector2f drop = {0, 0};
    char *tower = malloc(sizeof(char) * 9);

    tower[8] = '\0';
    for (int i = 0; i != 8; i += 1)
        tower[i] = 1;
    new.towers = tower;
    new.tower = 0;
    new.drop = drop;
    new.wave = set_wave(str);
    new.vs = set_vs();
    new.tree = set_tree();
    new.angle = 0;
    new.ctr = 0;
    new.score = 0;
    new.shoot1 = 0;
    new.shoot2 = 0;
    new.shoot3 = 0;
    new.shoot4 = 0;
    return set_part3(new, str);
}

tree_t set_tree(void)
{
    tree_t new;

    new.buy1 = 0;
    new.buy2 = 0;
    new.buy3 = 0;
    new.buy4 = 0;
    new.buy5 = 0;
    new.buy6 = 0;
    new.buy_mod = 1;
    new.dmg_mod = 1;
    new.outdmg_mod = 1;
    new.speed_mod = 1;
    new.up_mod = 1;
    new.life_mod = 1;
    return new;
}

versus_t set_vs(void)
{
    versus_t new;

    new.ctr = 0;
    return new;
}

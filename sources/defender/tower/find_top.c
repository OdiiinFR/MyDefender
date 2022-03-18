/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** find_top
*/

#include "defender.h"

void find_top2(tower_t *tower)
{
    if (tower->type == 3) {
        if (tower->angle == 0)
            tower->rect.top = (0 * tower->rect.height);
        if (tower->angle == 1)
            tower->rect.top = (4 * tower->rect.height);
        if (tower->angle == 2)
            tower->rect.top = (1 * tower->rect.height);
        if (tower->angle == 3)
            tower->rect.top = (5 * tower->rect.height);
        if (tower->angle == 4)
            tower->rect.top = (2 * tower->rect.height);
        if (tower->angle == 5)
            tower->rect.top = (6 * tower->rect.height);
        if (tower->angle == 6)
            tower->rect.top = (3 * tower->rect.height);
        if (tower->angle == 7)
            tower->rect.top = (7 * tower->rect.height);
        return;
    }
    return;
}

void find_top(tower_t *tower)
{
    if (tower->type == 4) {
        if (tower->angle == 0)
            tower->rect.top = (0 * tower->rect.height);
        if (tower->angle == 1)
            tower->rect.top = (4 * tower->rect.height);
        if (tower->angle == 2)
            tower->rect.top = (1 * tower->rect.height);
        if (tower->angle == 3)
            tower->rect.top = (5 * tower->rect.height);
        if (tower->angle == 4)
            tower->rect.top = (2 * tower->rect.height);
        if (tower->angle == 5)
            tower->rect.top = (6 * tower->rect.height);
        if (tower->angle == 6)
            tower->rect.top = (3 * tower->rect.height);
        if (tower->angle == 7)
            tower->rect.top = (7 * tower->rect.height);
        return;
    }
    return find_top2(tower);
}
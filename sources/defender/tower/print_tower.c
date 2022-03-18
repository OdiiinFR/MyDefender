/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** print_tower
*/

#include "defender.h"

void print_spr_scale(defender_t *defend, int x, int y, char *path)
{
    sfSprite *spr_scale = sfSprite_create();
    sfVector2f pos_scale = {x, y};
    sfTexture *spr = sfTexture_createFromFile(path, NULL);
    sfVector2f scale = {0.7, 0.7};

    sfSprite_setScale(spr_scale, scale);
    sfSprite_setTexture(spr_scale, spr, sfFalse);
    sfSprite_setPosition(spr_scale, pos_scale);
    sfRenderWindow_drawSprite(defend->window, spr_scale, NULL);
    sfSprite_destroy(spr_scale);
    sfTexture_destroy(spr);
}

void print_tower(defender_t *defend, tower_t *tower)
{
    sfSprite_setTexture(tower->spr, tower->text, sfFalse);
    sfSprite_setTextureRect(tower->spr, tower->rect);
    sfSprite_setPosition(tower->spr, tower->pos);
    sfRenderWindow_drawSprite(defend->window, tower->spr, NULL);
    twr_upgrade(tower, defend);
    return;
}

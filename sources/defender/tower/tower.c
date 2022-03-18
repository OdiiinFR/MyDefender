/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** tower
*/

#include "defender.h"

tower_t new_tower(int type, char *path, sfVector2f pos, defender_t *defend)
{
    tower_t new;
    sfIntRect rect = {0, 0, 110, 127};

    new.angle = 0;
    new.level = 1;
    new.pos = pos;
    new.spr = sfSprite_create();
    new.status = 0;
    if (type == 3 || type == 4) {
        rect.height = 79;
        rect.width = 82;
    }
    new.rect = rect;
    new.text = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(new.spr, new.text, sfFalse);
    sfSprite_setPosition(new.spr, new.pos);
    sfSprite_setTextureRect(new.spr, new.rect);
    new.type = type;
    return set_dmg(new, defend);
}

tower_t set_dmg(tower_t tower, defender_t *defend)
{
    if (tower.type == 1)
        tower.dmg = (40 * defend->tree.dmg_mod);
    if (tower.type == 2)
        tower.dmg = (60 * defend->tree.dmg_mod);
    if (tower.type == 3)
        tower.dmg = (150 * defend->tree.dmg_mod);
    if (tower.type == 4) {
        tower.dmg = (180 * defend->tree.dmg_mod);
        tower.rect.height = 72;
    }
    tower.focus = 0;
    tower.shoot = 0;
    tower.up = sfMusic_createFromFile("sounds/Anvil.ogg");
    sfMusic_setVolume(tower.up, defend->sound.vol_sound);
    return tower;
}

void twr_upgrade(tower_t *tower, defender_t *defend)
{
    do_upgrade(defend, tower);
    if (tower->type == 1) {
        if (defend->money >= 200 && tower->level == 1)
            print_update(defend, tower->pos, "images/tick1.png");
        if (defend->money >= 400 && tower->level == 2)
            print_update(defend, tower->pos, "images/tick1.png");
        if (defend->money >= 600 && tower->level == 3)
            print_update(defend, tower->pos, "images/tick1.png");
    }
    if (tower->type == 2) {
        if (defend->money >= 400 && tower->level == 1)
            print_update(defend, tower->pos, "images/tick1.png");
        if (defend->money >= 600 && tower->level == 2)
            print_update(defend, tower->pos, "images/tick1.png");
        if (defend->money >= 800 && tower->level == 3)
            print_update(defend, tower->pos, "images/tick1.png");
    }
    twr_upgrade2(tower, defend);
    return;
}

void twr_upgrade2(tower_t *tower, defender_t *defend)
{
    if (tower->type == 3) {
        if (defend->money >= 600 && tower->level == 1)
            print_update(defend, tower->pos, "images/tick1.png");
        if (defend->money >= 800 && tower->level == 2)
            print_update(defend, tower->pos, "images/tick1.png");
        if (defend->money >= 1000 && tower->level == 3)
            print_update(defend, tower->pos, "images/tick1.png");
    }
    if (tower->type == 4) {
        if (defend->money >= 800 && tower->level == 1)
            print_update(defend, tower->pos, "images/tick1.png");
        if (defend->money >= 1000 && tower->level == 2)
            print_update(defend, tower->pos, "images/tick1.png");
        if (defend->money >= 1200 && tower->level == 3)
            print_update(defend, tower->pos, "images/tick1.png");
    }
    return;
}

void do_upgrade(defender_t *defend, tower_t *tower)
{
    sfVector2i a = sfMouse_getPositionRenderWindow(defend->window);
    sfVector2f w = sfRenderWindow_mapPixelToCoords(defend->window, a, NULL);
    float xmin = tower->pos.x - 1;
    float xmax = tower->pos.x + 201;
    float ymin = tower->pos.y - 1;
    float ymax = tower->pos.y + 201;

    if (defend->mouse == 1) {
        if (w.x > xmin && w.x < xmax && w.y > ymin && w.y < ymax)
            find_level(defend, tower);
    }
    return;
}

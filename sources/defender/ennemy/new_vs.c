/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** new_vs
*/

#include "defender.h"

ennemy_t new_ennemy(int type, int x, int y, defender_t *defend)
{
    ennemy_t new;
    sfVector2f pos = {x, y};

    new.spr = sfSprite_create();
    new = find_type(new, type, defend->angle, defend);
    new.angle = defend->angle;
    new.type = type;
    new.pos = pos;
    new.speed = 10 * defend->tree.speed_mod;
    new.vir = 0;
    new.dead = sfMusic_createFromFile("sounds/explo.ogg");
    new.live = 0;
    new.moove = 0;
    new.attack = 0;
    sfMusic_setVolume(new.dead, defend->sound.vol_sound);
    sfSprite_setPosition(new.spr, new.pos);
    sfSprite_setTexture(new.spr, new.text, sfFalse);
    sfSprite_setTextureRect(new.spr, new.rect);
    return new;
}

void print_ennemy(ennemy_t *vX, defender_t *defend)
{
    sfSprite_setPosition(vX->spr, vX->pos);
    sfSprite_setTexture(vX->spr, vX->text, sfFalse);
    sfSprite_setTextureRect(vX->spr, vX->rect);
    sfRenderWindow_drawSprite(defend->window, vX->spr, NULL);
    return;
}

ennemy_t find_type(ennemy_t new, int type, int angle, defender_t *defend)
{
    if (type == 1) {
        new.hp = 50 * defend->tree.life_mod;
        new.dmg = 15 * defend->tree.outdmg_mod;
        new.text = sfTexture_createFromFile("images/ennemy1.png", NULL);
        new.rect = type0(angle);
    }
    if (type == 2) {
        new.hp = 90 * defend->tree.life_mod;
        new.dmg = 30 * defend->tree.outdmg_mod;
        new.text = sfTexture_createFromFile("images/ennemy2.png", NULL);
        new.rect = type1(angle);
    }
    return find_type2(new, type, angle, defend);
}

ennemy_t find_type2(ennemy_t new, int type, int angle, defender_t *defend)
{
    sfVector2f scale = {3, 3};

    if (type == 3) {
        new.hp = 200 * defend->tree.life_mod;
        new.dmg = 100 * defend->tree.outdmg_mod;
        new.text = sfTexture_createFromFile("images/ennemy3.png", NULL);
        new.rect = type2(angle);
    }
    if (type == 4) {
        new.hp = 350 * defend->tree.life_mod;
        new.dmg = 200 * defend->tree.outdmg_mod;
        new.text = sfTexture_createFromFile("images/ennemy4.png", NULL);
        new.rect = type3(angle);
        sfSprite_setScale(new.spr, scale);
    }
    return new;
}

sfIntRect type0(int angle)
{
    sfIntRect rect = {10, 0, 0, 0};

    if (angle == 0) {
        rect.width = 129;
        rect.top = 30;
        rect.height = 100;
    }
    if (angle == 1) {
        rect.width = 129;
        rect.top = 160;
        rect.height = 100;
    }
    if (angle == 3) {
        rect.width = 129;
        rect.top = 260;
        rect.height = 200;
    }
    return rect;
}

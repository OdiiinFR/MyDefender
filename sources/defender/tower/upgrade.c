/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** upgrade
*/

#include "defender.h"

void sound_up(defender_t *defend, tower_t *tower)
{
    sfMusic_setVolume(tower->up, defend->sound.vol_sound);
    sfMusic_play(tower->up);
    return;
}

void find_level(defender_t *defend, tower_t *tower)
{
    if (tower->type == 1) {
        if (defend->money >= 200 && tower->level == 1 && defend->tower == 5) {
            defend->money -= 200;
            tower->text = sfTexture_createFromFile(ONTW, NULL);
            tower->level = 2;
            tower->dmg *= 1.5;
            sfSprite_setTexture(tower->spr, tower->text, sfFalse);
            return sound_up(defend, tower);
        }
        if (defend->money >= 400 && tower->level == 2 && defend->tower == 5) {
            defend->money -= 400;
            tower->level = 3;
            tower->dmg *= 1.5;
            tower->text = sfTexture_createFromFile(ONTR, NULL);
            sfSprite_setTexture(tower->spr, tower->text, sfFalse);
            return sound_up(defend, tower);
        }
        level_max1(defend, tower);
    }
    return find_level2(defend, tower);
}

void level_max1(defender_t *defend, tower_t *tower)
{
    if (defend->money >= 600 && tower->level == 3 && defend->tower == 5) {
        defend->money -= 600;
        tower->level = 4;
        tower->dmg *= 1.5;
        tower->text = sfTexture_createFromFile(ONFO, NULL);
        sfSprite_setTexture(tower->spr, tower->text, sfFalse);
        sound_up(defend, tower);
    }
    return;
}

void find_level2(defender_t *defend, tower_t *tower)
{
    if (tower->type == 2) {
        if (defend->money >= 400 && tower->level == 1 && defend->tower == 5) {
            defend->money -= 400;
            tower->text = sfTexture_createFromFile(TWTW, NULL);
            tower->level = 2;
            tower->dmg *= 1.5;
            sfSprite_setTexture(tower->spr, tower->text, sfFalse);
            return sound_up(defend, tower);
        }
        if (defend->money >= 600 && tower->level == 2 && defend->tower == 5) {
            defend->money -= 600;
            tower->level = 3;
            tower->dmg *= 1.5;
            tower->text = sfTexture_createFromFile(TWTR, NULL);
            sfSprite_setTexture(tower->spr, tower->text, sfFalse);
            return sound_up(defend, tower);
        }
        level_max2(defend, tower);
    }
    return find_leve3(defend, tower);
}

void level_max2(defender_t *defend, tower_t *tower)
{
    if (defend->money >= 800 && tower->level == 3 && defend->tower == 5) {
        defend->money -= 800;
        tower->level = 4;
        tower->dmg *= 1.5;
        tower->text = sfTexture_createFromFile(TWFO, NULL);
        sfSprite_setTexture(tower->spr, tower->text, sfFalse);
        sound_up(defend, tower);
    }
    return;
}

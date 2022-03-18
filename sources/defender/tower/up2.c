/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** up2
*/

#include "defender.h"

void find_leve3(defender_t *defend, tower_t *tower)
{
    if (tower->type == 3) {
        if (defend->money >= 600 && tower->level == 1 && defend->tower == 5) {
            defend->money -= 600;
            tower->text = sfTexture_createFromFile(TRTW, NULL);
            tower->level = 2;
            tower->dmg *= 1.5;
            sfSprite_setTexture(tower->spr, tower->text, sfFalse);
            return sound_up(defend, tower);
        }
        if (defend->money >= 800 && tower->level == 2 && defend->tower == 5) {
            defend->money -= 800;
            tower->level = 3;
            tower->dmg *= 1.5;
            tower->text = sfTexture_createFromFile(TRTR, NULL);
            sfSprite_setTexture(tower->spr, tower->text, sfFalse);
            return sound_up(defend, tower);
        }
        level_max3(defend, tower);
    }
    return find_leve4(defend, tower);
}

void level_max3(defender_t *defend, tower_t *tower)
{
    if (defend->money >= 1000 && tower->level == 3 && defend->tower == 5) {
        defend->money -= 1000;
        tower->level = 4;
        tower->dmg *= 1.5;
        tower->text = sfTexture_createFromFile(TRFO, NULL);
        sfSprite_setTexture(tower->spr, tower->text, sfFalse);
        sound_up(defend, tower);
    }
    return;
}

void find_leve4(defender_t *defend, tower_t *tower)
{
    if (tower->type == 4) {
        if (defend->money >= 800 && tower->level == 1 && defend->tower == 5) {
            defend->money -= 800;
            tower->text = sfTexture_createFromFile(FOTW, NULL);
            tower->level = 2;
            tower->dmg *= 1.5;
            sfSprite_setTexture(tower->spr, tower->text, sfFalse);
            return sound_up(defend, tower);
        }
        if (defend->money >= 1000 && tower->level == 2 && defend->tower == 5) {
            defend->money -= 1000;
            tower->level = 3;
            tower->dmg *= 1.5;
            tower->text = sfTexture_createFromFile(FOTR, NULL);
            sfSprite_setTexture(tower->spr, tower->text, sfFalse);
            return sound_up(defend, tower);
        }
        level_max4(defend, tower);
    }
    return;
}

void level_max4(defender_t *defend, tower_t *tower)
{
    if (defend->money >= 1200 && tower->level == 3 && defend->tower == 5) {
        defend->money -= 1200;
        tower->level = 4;
        tower->dmg *= 1.5;
        tower->text = sfTexture_createFromFile(FOFO, NULL);
        sfSprite_setTexture(tower->spr, tower->text, sfFalse);
        sound_up(defend, tower);
    }
    return;
}

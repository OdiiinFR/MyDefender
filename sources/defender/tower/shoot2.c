/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** shoot2
*/

#include "defender.h"

void change(ennemy_t *vs, tower_t *tower, defender_t *defend)
{
    if (tower->type == 1 || tower->type == 2)
        tower->rect.top = (tower->angle * (tower->rect.height));
    else
        find_top(tower);
    sfSprite_setTextureRect(tower->spr, tower->rect);
    sfRenderWindow_drawSprite(defend->window, tower->spr, NULL);
    return;
}

void check_life(defender_t *defend, ennemy_t *vs)
{
    if (vs->hp <= 0) {
        sfMusic_setVolume(vs->dead, defend->sound.vol_sound);
        sfMusic_play(vs->dead);
        vs->pos.x = -40000;
        vs->pos.y = 100000;
        vs->live = 1;
        defend->score += 100;
        defend->money += 100;
        vs->hp = 0;
    }
}

void do_shoot2(defender_t *defend, ennemy_t *vs, tower_t *tower)
{
    if (tower->type == 3) {
        find_angle(vs, tower, defend);
        if (tower->shoot > 40 || tower->shoot == 40) {
            vs->hp -= tower->dmg;
            tower->shoot = 0;
            print_laser(defend, tower->pos, tower->angle);
            check_life(defend, vs);
        }

    }
    if (tower->type == 4) {
        find_angle(vs, tower, defend);
        if (tower->shoot > 10 || tower->shoot == 10) {
            vs->hp -= tower->dmg;
            tower->shoot = 0;
            print_laser(defend, tower->pos, tower->angle);
            check_life(defend, vs);
        }
    }
    return;
}

void do_shoot(defender_t *defend, ennemy_t *vs, tower_t *tower)
{
    if (tower->type == 1) {
        find_angle(vs, tower, defend);
        if (tower->shoot > 19 || tower->shoot == 19) {
            vs->hp -= tower->dmg;
            tower->shoot = 0;
            print_laser(defend, tower->pos, tower->angle);
            check_life(defend, vs);
        }
    }
    if (tower->type == 2) {
        find_angle(vs, tower, defend);
        if (tower->shoot > 30 || tower->shoot == 30) {
            vs->hp -= tower->dmg;
            tower->shoot = 0;
            print_laser(defend, tower->pos, tower->angle);
            check_life(defend, vs);
        }
    }
    return do_shoot2(defend, vs, tower);
}

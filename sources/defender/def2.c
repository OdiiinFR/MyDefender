/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** def2
*/

#include "defender.h"

void destroy_sounds2(defender_t defend)
{
    if (defend.towers[4] == 0) {
        sfMusic_destroy(defend.all.t5.up);
        sfSprite_destroy(defend.all.t5.spr);
        sfTexture_destroy(defend.all.t5.text);
    }
    if (defend.towers[5] == 0) {
        sfMusic_destroy(defend.all.t6.up);
        sfSprite_destroy(defend.all.t6.spr);
        sfTexture_destroy(defend.all.t6.text);
    }
    if (defend.towers[6] == 0) {
        sfMusic_destroy(defend.all.t7.up);
        sfSprite_destroy(defend.all.t7.spr);
        sfTexture_destroy(defend.all.t7.text);
    }
    if (defend.towers[7] == 0) {
        sfMusic_destroy(defend.all.t8.up);
        sfSprite_destroy(defend.all.t8.spr);
        sfTexture_destroy(defend.all.t8.text);
    }
}

void destroy_sounds1(defender_t defend)
{
    if (defend.towers[0] == 0) {
        sfMusic_destroy(defend.all.t1.up);
        sfSprite_destroy(defend.all.t1.spr);
        sfTexture_destroy(defend.all.t1.text);
    }
    if (defend.towers[1] == 0) {
        sfMusic_destroy(defend.all.t2.up);
        sfSprite_destroy(defend.all.t2.spr);
        sfTexture_destroy(defend.all.t2.text);
    }
    if (defend.towers[2] == 0) {
        sfMusic_destroy(defend.all.t3.up);
        sfSprite_destroy(defend.all.t3.spr);
        sfTexture_destroy(defend.all.t3.text);
    }
    if (defend.towers[3] == 0) {
        sfMusic_destroy(defend.all.t4.up);
        sfSprite_destroy(defend.all.t4.spr);
        sfTexture_destroy(defend.all.t4.text);
    }
}

void destroy_sounds3(defender_t defend)
{
    if (defend.vs.v8.live == 1)
        sfMusic_destroy(defend.vs.v8.dead);
    if (defend.vs.v9.live == 1)
        sfMusic_destroy(defend.vs.v9.dead);
    if (defend.vs.v10.live == 1)
        sfMusic_destroy(defend.vs.v10.dead);
    if (defend.vs.v11.live == 1)
        sfMusic_destroy(defend.vs.v11.dead);
    if (defend.vs.v12.live == 1)
        sfMusic_destroy(defend.vs.v12.dead);
    if (defend.vs.v13.live == 1)
        sfMusic_destroy(defend.vs.v13.dead);
    if (defend.vs.v14.live == 1)
        sfMusic_destroy(defend.vs.v14.dead);
    if (defend.vs.v15.live == 1)
        sfMusic_destroy(defend.vs.v15.dead);
    if (defend.vs.base.live == 1)
        sfMusic_destroy(defend.vs.base.dead);
    return;
}

void destroy_sounds(defender_t defend)
{
    sfMusic_destroy(defend.sound.buy);
    destroy_sounds1(defend);
    if (defend.vs.v1.live == 1)
        sfMusic_destroy(defend.vs.v1.dead);
    if (defend.vs.v2.live == 1)
        sfMusic_destroy(defend.vs.v2.dead);
    if (defend.vs.v3.live == 1)
        sfMusic_destroy(defend.vs.v3.dead);
    if (defend.vs.v4.live == 1)
        sfMusic_destroy(defend.vs.v4.dead);
    if (defend.vs.v5.live == 1)
        sfMusic_destroy(defend.vs.v5.dead);
    if (defend.vs.v5.live == 1)
        sfMusic_destroy(defend.vs.v5.dead);
    if (defend.vs.v6.live == 1)
        sfMusic_destroy(defend.vs.v6.dead);
    if (defend.vs.v7.live == 1)
        sfMusic_destroy(defend.vs.v7.dead);
    destroy_sounds3(defend);
    return destroy_sounds2(defend);
}

void print_anim(anim_t *anim, defender_t *defend)
{
    mv_anim(anim->spr1, defend);
    mv_anim(anim->spr2, defend);
    mv_anim(anim->spr3, defend);
    mv_anim(anim->spr4, defend);
    mv_anim(anim->spr5, defend);
    mv_anim(anim->spr6, defend);
    mv_anim(anim->spr7, defend);
    mv_anim(anim->spr8, defend);
    mv_anim(anim->spr9, defend);
    mv_anim(anim->spr10, defend);
    if (defend->enn.ctr > 10)
        defend->enn.ctr = 0;
    return;
}

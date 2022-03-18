/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** anim
*/

#include "defender.h"

void print_fnd(defender_t *defend)
{
    sfVector2f pos_txt = {700, 100};
    sfVector2f scale = {2, 2};

    print_sprite(defend, 0, 0, "images/intro.png");
    print_sprite(defend, 1790, 200, "images/reactor_remanant.png");
    print_sprite(defend, 1690, 300, "images/reactor_remanant.png");
    print_sprite(defend, 1790, 400, "images/reactor_remanant.png");
    print_sprite(defend, 1690, 500, "images/reactor_remanant.png");
    print_sprite(defend, 1790, 600, "images/reactor_remanant.png");
    print_sprite(defend, 1690, 700, "images/reactor_remanant.png");
    print_sprite(defend, 1790, 800, "images/reactor_remanant.png");
    defend->anim += 1;
    defend->enn.ctr += 1;
    if (defend->anim > 300)
        defend->fen = 0;
    if (defend->anim < 100)
        print_text(defend, pos_txt, "We are invaded !!\0", scale);
    if (defend->anim > 100)
        print_text(defend, pos_txt, "help us please !!\0", scale);
    return;
}

void do_anim(defender_t *defend)
{
    sfClock *clock;
    sfTime timer;
    float seconds;
    button_t back = new_btn(50, 50, "\t  SKIP\0", 1);

    print_fnd(defend);
    clock = sfClock_create();
    timer = sfClock_getElapsedTime(clock);
    seconds = timer.microseconds / 1000000.0;
    while (seconds < 0.07) {
        timer = sfClock_getElapsedTime(clock);
        seconds = timer.microseconds / 1000000.0;
    }
    print_anim(&defend->enn, defend);
    btn_update(&back, defend);
    menu_to_menu(0, &back, defend);
    print_btn(defend, back);
    return;
}

sfSprite *set_spr(int x ,int y, sfTexture *text, sfIntRect rect)
{
    sfSprite *new = sfSprite_create();
    sfVector2f pos = {x, y};

    sfSprite_setTexture(new, text, sfFalse);
    sfSprite_setPosition(new, pos);
    sfSprite_setTextureRect(new, rect);
    return new;
}

void mv_anim(sfSprite *spr, defender_t *dfnd)
{
    sfIntRect rec = sfSprite_getTextureRect(spr);
    sfVector2f pos = sfSprite_getPosition(spr);

    pos.x += 2;
    if (dfnd->enn.ctr > 10) {
        if (rec.top == 30)
            rec.top = 577;
        else
            rec.top = 30;
    }
    sfSprite_setPosition(spr, pos);
    sfSprite_setTextureRect(spr, rec);
    sfRenderWindow_drawSprite(dfnd->window, spr, NULL);
}

anim_t new_anim(void)
{
    anim_t new;
    sfIntRect one = {0, 30, 129, 100};
    sfIntRect two = {0, 577, 129, 100};

    new.text = sfTexture_createFromFile("images/ennemy1.png", NULL);
    new.spr1 = set_spr(0, 200, new.text, one);
    new.spr2 = set_spr(50, 300, new.text, two);
    new.spr3 = set_spr(0, 400, new.text, one);
    new.spr4 = set_spr(50, 500, new.text, two);
    new.spr5 = set_spr(0, 600, new.text, one);
    new.spr6 = set_spr(50, 700, new.text, two);
    new.spr7 = set_spr(0, 800, new.text, one);
    new.spr8 = set_spr(50, 900, new.text, two);
    new.spr9 = set_spr(0, 1000, new.text, one);
    new.spr10 = set_spr(50, 1100, new.text, two);
    new.rect1 = one;
    new.rect2 = two;
    new.ctr = 0;
    return new;
}

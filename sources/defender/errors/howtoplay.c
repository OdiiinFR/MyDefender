/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** howtoplay
*/

#include "defender.h"

void do_htp(defender_t *defend)
{
    sfSprite *spr_fnd = sfSprite_create();
    sfVector2f pos_fnd = {0, 0};
    sfTexture *fnd = sfTexture_createFromFile("images/background.png", NULL);
    button_t back = new_btn(50, 50, "    RETURN\0", 1);

    sfSprite_setTexture(spr_fnd, fnd, sfFalse);
    sfSprite_setPosition(spr_fnd, pos_fnd);
    btn_update(&back, defend);
    menu_to_menu(0, &back, defend);
    sfRenderWindow_drawSprite(defend->window, spr_fnd, NULL);
    sfRenderWindow_drawSprite(defend->window, back.spr, NULL);
    sfRenderWindow_drawText(defend->window, back.str, NULL);
    print_htp(defend);
    close_btn(back);
    destroy_fnd(fnd, spr_fnd);
    return;
}

void print_htp(defender_t *defend)
{
    sfVector2f pos = {500, 100};
    sfVector2f pos2 = {200, 340};
    sfVector2f pos3 = {200, 500};
    sfVector2f pos4 = {200, 650};
    sfVector2f pos5 = {200, 800};
    sfVector2f pos6 = {200, 930};
    sfVector2f scale1 = {5, 5};
    sfVector2f scale2 = {2, 2};
    char str1[30] = "You need to defend your base\0";
    char str2[36] = "How ?\t Buy towers from marketplace\0";
    char str3[27] = "And place it on the map !\0";
    char str4[32] = "You can discover some features\0";
    char str5[24] = "like personalized keys\0";

    print_text(defend, pos, "How To Play\0", scale1);
    print_text(defend, pos2, str1, scale2);
    print_text(defend, pos3, str2, scale2);
    print_text(defend, pos4, str3, scale2);
    print_text(defend, pos5, str4, scale2);
    return print_text(defend, pos6, str5, scale2);
}

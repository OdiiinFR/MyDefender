/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** settings2
*/

#include "defender.h"

void draw_set(defender_t *dfnd, button_t btn1, button_t btn3, button_t btn2)
{
    wind_sizeupdate(&btn1, dfnd);
    wind_sizeupdate(&btn2, dfnd);
    wind_sizeupdate(&btn3, dfnd);
    btn_update(&btn1, dfnd);
    btn_update(&btn2, dfnd);
    btn_update(&btn3, dfnd);
    sfRenderWindow_drawSprite(dfnd->window, btn1.spr, NULL);
    sfRenderWindow_drawSprite(dfnd->window, btn2.spr, NULL);
    sfRenderWindow_drawSprite(dfnd->window, btn3.spr, NULL);
    sfRenderWindow_drawText(dfnd->window, btn1.str, NULL);
    sfRenderWindow_drawText(dfnd->window, btn2.str, NULL);
    sfRenderWindow_drawText(dfnd->window, btn3.str, NULL);
    close_btn(btn1);
    close_btn(btn2);
    close_btn(btn3);
    set_keys(dfnd);
    set_frame(dfnd);
    set_volume(dfnd);
    return;
}

void text_settings(defender_t *defend)
{
    char name1[26] = "Choose your resolution :\0";
    char name2[22] = "Set up your sounds :\0";
    char name3[20] = "Set up your keys :\0";
    sfVector2f pos1 = {115, 160};
    sfVector2f pos2 = {100, 500};
    sfVector2f pos3 = {1000, 160};
    sfVector2f scale1 = {1.5, 1.5};

    print_text(defend, pos1, name1, scale1);
    print_text(defend, pos2, name2, scale1);
    print_text(defend, pos3, name3, scale1);
    return;
}

void print_text(defender_t *dfnd, sfVector2f pos, char *str, sfVector2f scale)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile("images/Sectar.otf");

    sfText_setColor(text, sfWhite);
    sfText_setPosition(text, pos);
    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setScale(text, scale);
    sfRenderWindow_drawText(dfnd->window, text, NULL);
    sfFont_destroy(font);
    sfText_destroy(text);
    return;
}

void destroy_fnd(sfTexture *text, sfSprite *sprite)
{
    sfSprite_destroy(sprite);
    sfTexture_destroy(text);
    return;
}

void print_btn_scoreboard(defender_t *defend)
{
    button_t score = new_btn(800, 450, " best score\0", 1.5);

    btn_update(&score, defend);
    menu_to_menu(3, &score, defend);
    sfRenderWindow_drawSprite(defend->window, score.spr, NULL);
    sfRenderWindow_drawText(defend->window, score.str, NULL);
    close_btn(score);
    return;
}

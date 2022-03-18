/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** game2
*/

#include "defender.h"

void do_win(defender_t *defend)
{
    sfVector2f pos = {500, 400};
    sfVector2f scale = {3, 3};
    button_t back = new_btn(50, 50, "    RETURN\0", 1);
    sfVector2f pos2 = {1000, 180};
    sfVector2f pos3 = {600, 180};
    char *str = my_itoa(defend->score + defend->money);

    print_sprite(defend, 0, 0, "images/background.png");
    print_text(defend, pos3, "Score :", scale);
    print_text(defend, pos2, str, scale);
    print_text(defend, pos, " YOU WIIIIIN !\n PEACE WON !!!", scale);
    btn_update(&back, defend);
    menu_to_menu(0, &back, defend);
    sfRenderWindow_drawSprite(defend->window, back.spr, NULL);
    sfRenderWindow_drawText(defend->window, back.str, NULL);
    close_btn(back);
    return;
}

void do_loose(defender_t *defend)
{
    sfVector2f pos = {500, 400};
    sfVector2f scale = {3, 3};
    button_t back = new_btn(50, 50, "    RETURN\0", 1);

    defend->money = 0;
    do_map(defend);
    print_text(defend, pos, " YOU LOOOOOOOSE !\n PUTIN IS BETTER !!!", scale);
    btn_update(&back, defend);
    menu_to_menu(0, &back, defend);
    sfRenderWindow_drawSprite(defend->window, back.spr, NULL);
    sfRenderWindow_drawText(defend->window, back.str, NULL);
    close_btn(back);
    return;
}

int game2(defender_t *defend, sfEvent event)
{
    if (defend->fen == 7)
        do_htp(defend);
    if (defend->fen == 8)
        do_anim(defend);
    if (defend->fen == 9)
        do_loose(defend);
    if (defend->fen == 10)
        do_win(defend);
    sfRenderWindow_display(defend->window);
    return 0;
}

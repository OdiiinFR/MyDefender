/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** game
*/

#include "defender.h"

int do_game(defender_t *defend)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(defend->window, &event))
        analyse_event(event, defend);
    sfRenderWindow_clear(defend->window, sfBlack);
    defend->event = event;
    if (defend->fen == 0)
        do_menu(defend);
    if (defend->fen == 1)
        do_choice(defend);
    if (defend->fen == 4)
        do_settings(defend);
    if (defend->fen == 3)
        do_scoreboard(defend);
    if (defend->fen == 2)
        do_play(defend);
    if (defend->fen == 5)
        do_pause(defend);
    return game2(defend, event);
}

void do_menu(defender_t *defend)
{
    sfSprite *spr_fnd = sfSprite_create();
    sfVector2f pos_fnd = {0, 0};
    sfTexture *fnd = sfTexture_createFromFile("images/background.png", NULL);
    button_t play = new_btn(800, 300, "      Play\0", 1.5);
    button_t setings = new_btn(800, 600, "   Settings\0", 1.5);
    button_t exit = new_btn(800, 750, "      Quit\0", 1.5);

    sfSprite_setTexture(spr_fnd, fnd, sfFalse);
    sfSprite_setPosition(spr_fnd, pos_fnd);
    btn_update(&play, defend);
    btn_update(&setings, defend);
    btn_update(&exit, defend);
    if (btn_quit(&exit, defend) == 84) {
        close_menu(play, setings, exit, defend);
        return;
    }
    sfRenderWindow_drawSprite(defend->window, spr_fnd, NULL);
    print_btn_scoreboard(defend);
    destroy_fnd(fnd, spr_fnd);
    return print_menu(defend, play, exit, setings);
}

void print_menu(defender_t *dfnd, button_t play, button_t exit, button_t btn)
{
    sfText *game = sfText_create();
    sfFont *font = sfFont_createFromFile("images/Sectar.otf");
    char name[14] = "Save Ukraine\0";
    sfVector2f pos = {650, 100};
    sfVector2f scale = {3, 3};

    sfText_setColor(game, sfWhite);
    sfText_setPosition(game, pos);
    sfText_setString(game, name);
    sfText_setFont(game, font);
    sfText_setScale(game, scale);
    menu_to_menu(1, &play, dfnd);
    menu_to_menu(4, &btn, dfnd);
    sfRenderWindow_drawSprite(dfnd->window, play.spr, NULL);
    sfRenderWindow_drawSprite(dfnd->window, exit.spr, NULL);
    sfRenderWindow_drawSprite(dfnd->window, btn.spr, NULL);
    sfRenderWindow_drawText(dfnd->window, game, NULL);
    return draw_menu(dfnd, play, exit, btn);
}

void draw_menu(defender_t *dfnd, button_t play, button_t exit, button_t btn)
{
    button_t how = new_btn2(75, 900, " h", 1.5);

    btn_update(&how, dfnd);
    menu_to_menu(7, &how, dfnd);
    sfRenderWindow_drawText(dfnd->window, play.str, NULL);
    sfRenderWindow_drawText(dfnd->window, exit.str, NULL);
    sfRenderWindow_drawText(dfnd->window, btn.str, NULL);
    sfRenderWindow_drawSprite(dfnd->window, how.spr, NULL);
    sfRenderWindow_drawText(dfnd->window, how.str, NULL);
    close_btn(how);
    close_btn(play);
    close_btn(exit);
    close_btn(btn);
    return;
}

void print_update(defender_t *defend, sfVector2f pos, char *path)
{
    sfSprite *spr_map = sfSprite_create();
    sfTexture *map = sfTexture_createFromFile(path, NULL);
    sfVector2f scale = {0.3, 0.3};

    pos.x -= 40;
    pos.y -= 40;
    sfSprite_setTexture(spr_map, map, sfFalse);
    sfSprite_setScale(spr_map, scale);
    sfSprite_setPosition(spr_map, pos);
    sfRenderWindow_drawSprite(defend->window, spr_map, NULL);
    sfSprite_destroy(spr_map);
    sfTexture_destroy(map);
    return;
}

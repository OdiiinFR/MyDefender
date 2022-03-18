/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** settings
*/

#include "defender.h"

void do_settings(defender_t *defend)
{
    sfSprite *spr_fnd = sfSprite_create();
    sfVector2f pos_fnd = {0, 0};
    sfTexture *fnd = sfTexture_createFromFile("images/background.png", NULL);
    button_t size1 = new_btn(100, 300, "\t  16/10\0", 1);
    button_t size2 = new_btn(320, 300, "\t  16/9\0", 1);
    button_t size3 = new_btn(540, 300, "\t   4/3\0", 1);
    button_t back = new_btn(50, 50, "    RETURN\0", 1);

    sfSprite_setTexture(spr_fnd, fnd, sfFalse);
    sfSprite_setPosition(spr_fnd, pos_fnd);
    btn_update(&back, defend);
    menu_to_menu(0, &back, defend);
    text_settings(defend);
    sfRenderWindow_drawSprite(defend->window, spr_fnd, NULL);
    sfRenderWindow_drawSprite(defend->window, back.spr, NULL);
    sfRenderWindow_drawText(defend->window, back.str, NULL);
    text_settings(defend);
    close_btn(back);
    destroy_fnd(fnd, spr_fnd);
    return draw_set(defend, size1, size3, size2);
}

void do_choice(defender_t *defend)
{
    button_t map4 = new_btn(200, 200, "   tutoriel\0", 1.3);
    button_t map1 = new_btn(600, 200, "   Level  1\0", 1.3);
    button_t map2 = new_btn(1000, 200, "   Level  2\0", 1.3);
    button_t map3 = new_btn(1400, 200, " boss  final\0", 1.3);
    button_t back = new_btn(50, 50, "    RETURN\0", 1.3);
    button_t plat = new_btn(800, 800, "\t  PLAY\0", 1.3);

    print_mini_maps(defend);
    btn_update(&back, defend);
    btn_update(&plat, defend);
    menu_to_menu(0, &back, defend);
    menu_to_menu(2, &plat, defend);
    check_map(defend, map1);
    check_map(defend, map2);
    check_map(defend, map3);
    check_map(defend, map4);
    print_btn(defend, back);
    print_btn(defend, plat);
    set_game(defend);
    return;
}

void wind_sizeupdate(button_t *btn, defender_t *defend)
{
    sfVector2i a = sfMouse_getPositionRenderWindow(defend->window);
    sfVector2f w = sfRenderWindow_mapPixelToCoords(defend->window, a, NULL);
    int xmn = (btn->pos.x - 1);
    int xmx = (btn->pos.x + ((btn->lenght + 1) * btn->scale.x));
    int ymn = (btn->pos.y - 1);
    int ymx = (btn->pos.y + ((btn->hight + 1) * btn->scale.x));

    wind_sizeupdate2(btn, defend);
    if (defend->fen_size == 43) {
        if (strcompare("\t   4/3\0", btn->texte) == 0) {
            sfSprite_setTexture(btn->spr, btn->clic, sfFalse);
            btn->text = 2;
        }
    }
    if (defend->mouse == 1) {
        if (w.x > xmn && w.x < xmx && w.y > ymn && w.y < ymx)
            find_res(btn, defend);
    }
    return;
}

void find_res(button_t *btn, defender_t *defend)
{
    sfVector2u size1 = {1920, 1080};
    sfVector2u size2 = {2560, 1600};
    sfVector2u size3 = {1280, 1024};

    if (strcompare("\t  16/9\0", btn->texte) == 0) {
        sfSprite_setTexture(btn->spr, btn->clic, sfFalse);
        defend->fen_size = 169;
        sfRenderWindow_setSize(defend->window, size1);
    }
    if (strcompare("\t  16/10\0", btn->texte) == 0) {
        sfSprite_setTexture(btn->spr, btn->clic, sfFalse);
        defend->fen_size = 1610;
        sfRenderWindow_setSize(defend->window, size2);
    }
    if (strcompare("\t   4/3\0", btn->texte) == 0) {
        sfSprite_setTexture(btn->spr, btn->clic, sfFalse);
        defend->fen_size = 43;
        sfRenderWindow_setSize(defend->window, size3);
    }
    return;
}

void wind_sizeupdate2(button_t *btn, defender_t *defend)
{
    int xmn = (btn->pos.x - 1);
    int xmx = (btn->pos.x + ((btn->lenght + 1) * btn->scale.x));
    int ymn = (btn->pos.y - 1);
    int ymx = (btn->pos.y + ((btn->hight + 1) * btn->scale.x));

    if (defend->fen_size == 169) {
        if (strcompare("\t  16/9\0", btn->texte) == 0) {
            sfSprite_setTexture(btn->spr, btn->clic, sfFalse);
            btn->text = 2;
        }
    }
    if (defend->fen_size == 1610) {
        if (strcompare("\t  16/10\0", btn->texte) == 0) {
            sfSprite_setTexture(btn->spr, btn->clic, sfFalse);
            btn->text = 2;
        }
    }
    return;
}

/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** buttons2
*/

#include "defender.h"

void print_btn(defender_t *defend, button_t btn)
{
    sfSprite_setPosition(btn.spr, btn.pos);
    sfRenderWindow_drawSprite(defend->window, btn.spr, NULL);
    sfRenderWindow_drawText(defend->window, btn.str, NULL);
    close_btn(btn);
    return;
}

void find_map(defender_t *defend, button_t *button)
{
    find_map2(defend, button);
    if (defend->map == 2) {
        if (strcompare("   Level  2\0", button->texte) == 0) {
            sfSprite_setTexture(button->spr, button->clic, sfFalse);
            button->text = 2;
            print_sprite(defend, 942, 392, "images/border.png");
        }
    }
    if (defend->map == 3) {
        if (strcompare(" boss  final\0", button->texte) == 0) {
            sfSprite_setTexture(button->spr, button->clic, sfFalse);
            button->text = 2;
            print_sprite(defend, 1367, 392, "images/border.png");
        }
    }
    return;
}

void choose(defender_t *defend, button_t *button)
{
    sfVector2i a = sfMouse_getPositionRenderWindow(defend->window);
    sfVector2f w = sfRenderWindow_mapPixelToCoords(defend->window, a, NULL);
    int xmn = (button->pos.x - 1);
    int xmx = (button->pos.x + ((button->lenght + 1) * button->scale.x));
    int ymn = (button->pos.y - 1);
    int ymx = (button->pos.y + ((button->hight + 1) * button->scale.x));

    if (defend->mouse == 1) {
        if (w.x > xmn && w.x < xmx && w.y > ymn && w.y < ymx)
            find_btn(defend, button);
    }
    return;
}

void find_btn(defender_t *defend, button_t *button)
{
    if (strcompare("   tutoriel\0", button->texte) == 0)
        defend->map = 0;
    if (strcompare("   Level  1\0", button->texte) == 0)
        defend->map = 1;
    if (strcompare("   Level  2\0", button->texte) == 0)
        defend->map = 2;
    if (strcompare(" boss  final\0", button->texte) == 0)
        defend->map = 3;
    return;
}

void find_map2(defender_t *defend, button_t *button)
{
    if (defend->map == 0) {
        if (strcompare("   tutoriel\0", button->texte) == 0) {
            sfSprite_setTexture(button->spr, button->clic, sfFalse);
            button->text = 2;
            print_sprite(defend, 92, 392, "images/border.png");
        }
    }
    if (defend->map == 1) {
        if (strcompare("   Level  1\0", button->texte) == 0) {
            sfSprite_setTexture(button->spr, button->clic, sfFalse);
            button->text = 2;
            print_sprite(defend, 518, 392, "images/border.png");
        }
    }
    return;
}

/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** buy
*/

#include "defender.h"

void buy_syst(defender_t *defend)
{
    sfVector2i a = sfMouse_getPositionRenderWindow(defend->window);
    sfVector2f w = sfRenderWindow_mapPixelToCoords(defend->window, a, NULL);

    if (defend->mouse == 1 && defend->hud == 21 || defend->hud == 10) {
        buy_tone(defend, w);
        buy_ttwo(defend, w);
        buy_tthree(defend, w);
        buy_tfour(defend, w);
    }
    return;
}

void buy_tone(defender_t *defend, sfVector2f w)
{
    int nb = (100 * defend->tree.buy_mod);

    if (w.x > 1780 && w.x < 1860 && w.y > 80 && w.y < 200) {
        if (defend->money < nb || defend->inv.qty1 > 8)
            return;
        defend->money -= nb;
        defend->inv.qty1 += 1;
        sfMusic_setVolume(defend->sound.buy, defend->sound.vol_sound);
        sfMusic_play(defend->sound.buy);
    }
    return;
}

void buy_ttwo(defender_t *defend, sfVector2f w)
{
    int nb = (200 * defend->tree.buy_mod);

    if (w.x > 1780 && w.x < 1860 && w.y > 220 && w.y < 380) {
        if (defend->money < nb || defend->inv.qty2 > 8)
            return;
        defend->money -= nb;
        defend->inv.qty2 += 1;
        sfMusic_setVolume(defend->sound.buy, defend->sound.vol_sound);
        sfMusic_play(defend->sound.buy);
    }
    return;
}

void buy_tthree(defender_t *defend, sfVector2f w)
{
    int nb = (300 * defend->tree.buy_mod);

    if (w.x > 1780 && w.x < 1860 && w.y > 430 && w.y < 560) {
        if (defend->money < nb || defend->inv.qty3 > 8)
            return;
        defend->money -= nb;
        defend->inv.qty3 += 1;
        sfMusic_setVolume(defend->sound.buy, defend->sound.vol_sound);
        sfMusic_play(defend->sound.buy);
    }
    return;
}

void buy_tfour(defender_t *defend, sfVector2f w)
{
    int nb = (400 * defend->tree.buy_mod);

    if (w.x > 1780 && w.x < 1860 && w.y > 640 && w.y < 750) {
        if (defend->money < nb || defend->inv.qty4 > 8)
            return;
        defend->money -= nb;
        defend->inv.qty4 += 1;
        sfMusic_setVolume(defend->sound.buy, defend->sound.vol_sound);
        sfMusic_play(defend->sound.buy);
    }
    return;
}

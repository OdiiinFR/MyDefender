/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** music
*/

#include "defender.h"

musics_t set_zic(void)
{
    musics_t new;
    float vol = 100;
    float sound = 100;

    new.vol_music = vol;
    new.vol_sound = sound;
    new.menu = sfMusic_createFromFile("sounds/menu.ogg");
    sfMusic_setLoop(new.menu, 1);
    sfMusic_setVolume(new.menu, vol);
    new.in_game = sfMusic_createFromFile("sounds/world-ambience-5.ogg");
    sfMusic_setLoop(new.menu, 1);
    sfMusic_setVolume(new.menu, vol);
    new.run = 0;
    new.buy = sfMusic_createFromFile("sounds/upgrade.ogg");
    sfMusic_setVolume(new.buy, new.vol_sound);
    return new;
}

void check_zic(defender_t *defend)
{
    if (defend->fen != 2 || defend->fen != 8) {
        if (defend->sound.run == 1) {
            sfMusic_pause(defend->sound.in_game);
            sfMusic_play(defend->sound.menu);
            defend->sound.run = 0;
        }
        sfMusic_setVolume(defend->sound.menu, defend->sound.vol_music);
    }
    if (defend->fen == 2 || defend->fen == 8) {
        if (defend->sound.run == 0) {
            sfMusic_pause(defend->sound.menu);
            sfMusic_play(defend->sound.in_game);
            defend->sound.run = 1;
        }
        sfMusic_setVolume(defend->sound.in_game, defend->sound.vol_music);
    }
}

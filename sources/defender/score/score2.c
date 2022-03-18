/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** score2
*/

#include "defender.h"

void print_score4(defender_t *defend)
{
    int fd4 = open("score/boss.txt", O_RDONLY);
    int size4 = 70;
    size_t d = size4;
    char *str4 = malloc(sizeof(char) * size4);
    sfVector2f map4 = {1380, 300};
    sfVector2f scale = {2, 2};

    read(fd4, str4, d);
    str4[size4] = '\0';
    print_text(defend, map4, str4, scale);
    free(str4);
    close(fd4);
    return;
}

void do_scoreboard2(defender_t *defend)
{
    sfVector2f scale = {2, 2};
    sfVector2f map4 = {1380, 200};
    sfVector2f txt = {600, 50};

    print_text(defend, map4, "BOSS FINAL :\0", scale);
    print_text(defend, txt, "ScoreBoard / Levels :\0", scale);
    print_score(defend);
    print_score2(defend);
    print_score3(defend);
    print_score4(defend);
    return;
}

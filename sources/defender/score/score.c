/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** score
*/

#include "defender.h"

int find_len(char *str)
{
    int i = 0;

    for (i = 0; str[i] != '\n'; i += 1);
    return i;
}

void do_scoreboard(defender_t *defend)
{
    sfSprite *spr_fnd = sfSprite_create();
    sfVector2f pos_fnd = {0, 0};
    sfVector2f map1 = {150, 200};
    sfVector2f map2 = {580, 200};
    sfVector2f map3 = {990, 200};
    sfVector2f scale = {2, 2};
    sfTexture *fnd = sfTexture_createFromFile("images/background.png", NULL);
    button_t back = new_btn(50, 50, "    RETURN\0", 1.3);

    sfSprite_setTexture(spr_fnd, fnd, sfFalse);
    sfSprite_setPosition(spr_fnd, pos_fnd);
    btn_update(&back, defend);
    menu_to_menu(0, &back, defend);
    sfRenderWindow_drawSprite(defend->window, spr_fnd, NULL);
    print_text(defend, map1, "TUTORIEL :\0", scale);
    print_text(defend, map2, "LEVEL 1  :\0", scale);
    print_text(defend, map3, "LEVEL 2  :\0", scale);
    print_btn(defend, back);
    destroy_fnd(fnd, spr_fnd);
    return do_scoreboard2(defend);
}

void print_score(defender_t *defend)
{
    int fd1 = open("score/tuto.txt", O_RDONLY);
    int size1 = 70;
    size_t a = size1;
    char *str1 = malloc(sizeof(char) * size1);
    sfVector2f map1 = {150, 300};
    sfVector2f scale = {2, 2};

    read(fd1, str1, a);
    str1[size1] = '\0';
    print_text(defend, map1, str1, scale);
    free(str1);
    close(fd1);
    return;
}

void print_score2(defender_t *defend)
{
    int fd2 = open("score/level1.txt", O_RDONLY);
    int size2 = 70;
    size_t b = size2;
    char *str2 = malloc(sizeof(char) * size2);
    sfVector2f map2 = {580, 300};
    sfVector2f scale = {2, 2};

    read(fd2, str2, b);
    str2[size2] = '\0';
    print_text(defend, map2, str2, scale);
    free(str2);
    close(fd2);
    return;
}

void print_score3(defender_t *defend)
{
    int fd3 = open("score/level2.txt", O_RDONLY);
    int size3 = 70;
    size_t c = size3;
    char *str3 = malloc(sizeof(char) * size3);
    sfVector2f map3 = {990, 300};
    sfVector2f scale = {2, 2};

    read(fd3, str3, c);
    str3[size3] = '\0';
    print_text(defend, map3, str3, scale);
    free(str3);
    close(fd3);
    return;
}

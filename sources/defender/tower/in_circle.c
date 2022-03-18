/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** in_circle
*/

#include "defender.h"

void in_circle(sfVector2f posc, int radius, defender_t *defend,
    int nb)
{
    sfVector2i tower = {radius, nb};
    for (int i = defend->vs.ctr; i >= 1; i--) {
        i == 1 ? check_ennemy1(posc, tower, defend, i) : 0;
        i == 2 ? check_ennemy2(posc, tower, defend, i) : 0;
        i == 3 ? check_ennemy3(posc, tower, defend, i) : 0;
        i == 4 ? check_ennemy4(posc, tower, defend, i) : 0;
        i == 5 ? check_ennemy5(posc, tower, defend, i) : 0;
        i == 6 ? check_ennemy6(posc, tower, defend, i) : 0;
        i == 7 ? check_ennemy7(posc, tower, defend, i) : 0;
        i == 8 ? check_ennemy8(posc, tower, defend, i) : 0;
        i == 9 ? check_ennemy9(posc, tower, defend, i) : 0;
        i == 10 ? check_ennemy10(posc, tower, defend, i) : 0;
        i == 11 ? check_ennemy11(posc, tower, defend, i) : 0;
        i == 12 ? check_ennemy12(posc, tower, defend, i) : 0;
        i == 13 ? check_ennemy13(posc, tower, defend, i) : 0;
        i == 14 ? check_ennemy14(posc, tower, defend, i) : 0;
        i == 15 ? check_ennemy15(posc, tower, defend, i) : 0;
    }
    return;
}

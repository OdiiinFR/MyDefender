/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** print_circle
*/

#include "defender.h"

void draw_tower_range(defender_t *defend)
{
    switch (defend->map) {
        case 0 :
            circle_map1(defend);
            break;
        case 1 :
            circle_map2(defend);
            break;
        case 2 :
            circle_map3(defend);
            break;
        case 3 :
            circle_map4(defend);
            break;
        default :
            return;
    }
}

void draw_circle(int x, int y, int radius, defender_t *defend)
{
    sfVector2f pos = {x - 100, y - 100};
    sfCircleShape *circle = sfCircleShape_create();

    sfCircleShape_setRadius(circle, radius);
    sfCircleShape_setFillColor(circle, sfTransparent);
    sfCircleShape_setOutlineColor(circle, sfBlue);
    sfCircleShape_setOutlineThickness(circle, 5);
    sfCircleShape_setPosition(circle, pos);
    sfRenderWindow_drawCircleShape(defend->window, circle, NULL);
    sfCircleShape_destroy(circle);
}

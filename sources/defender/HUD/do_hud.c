/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** do_hud
*/

#include "defender.h"

void print_tree_text(defender_t *defend)
{
    sfVector2f scale1 = {0.6, 0.6};
    sfVector2f post1 = {360, 50};
    sfVector2f post2 = {800, 50};
    char *text1 = "increase towers dmg by 20%\n\t\t\t\t\t500\0";
    char *text2 = "decrease ennemy life by 20%\n\t\t\t\t\t500\0";

    if (defend->tree.buy1 == 1)
        print_green(defend, post1, text1, scale1);
    else
        print_text(defend, post1, text1, scale1);
    if (defend->tree.buy2 == 1)
        print_green(defend, post2, text2, scale1);
    else
        print_text(defend, post2, text2, scale1);
    print_tree_text2(defend, scale1);
}

void print_tree_text2(defender_t *defend, sfVector2f scale1)
{
    sfVector2f post3 = {330, 180};
    sfVector2f post4 = {530, 180};
    sfVector2f post5 = {730, 180};
    sfVector2f post6 = {940, 180};
    if (defend->tree.buy3 == 1)
        print_green(defend, post3, "-20% upgrade cost\n\t\t\t1000\0", scale1);
    else
        print_text(defend, post3, "-20% upgrade cost\n\t\t\t1000\0", scale1);
    if (defend->tree.buy4 == 1)
        print_green(defend, post4, "-20% buy cost\n\t\t1000\0", scale1);
    else
        print_text(defend, post4, "-20% buy cost\n\t\t1000\0", scale1);
    if (defend->tree.buy5 == 1)
        print_green(defend, post5, "-20% ennemy speed\n\t\t\t1000\0", scale1);
    else
        print_text(defend, post5, "-20% ennemy speed\n\t\t\t1000\0", scale1);
    if (defend->tree.buy6 == 1)
        print_green(defend, post6, "-20% ennemy dmg\n\t\t\t1000\0", scale1);
    else
        print_text(defend, post6, "-20% ennemy dmg\n\t\t\t1000\0", scale1);
}

void print_tree_hud(defender_t *defend)
{
    sfVector2f post = {620, 0};
    sfVector2f scale = {1.3, 1.3};

    btn_tree(defend);
    print_spr_scale(defend, 300, -250, "images/hud_tree.png");
    print_spr_scale(defend, 390, 90, "images/fleche.png");
    print_spr_scale(defend, 830, 90, "images/fleche.png");
    print_text(defend, post, "Skill Tree\0", scale);
    print_tree_text(defend);
}

void do_hud(defender_t *defend)
{
    if (defend->hud == 21) {
        print_inv_hud(defend);
        print_market_hud(defend);
        print_tree_hud(defend);
    }
    if (defend->hud == 11)
        print_inv_hud(defend);
    if (defend->hud == 10) {
        print_market_hud(defend);
        print_tree_hud(defend);
    }
    return;
}

/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** en3
*/

#include "defender.h"

float find_hp5(defender_t *defend, float nb)
{
    if (defend->vs.ctr == 14) {
        nb += defend->vs.v2.hp + defend->vs.v3.hp + defend->vs.v4.hp;
        nb += defend->vs.v5.hp + defend->vs.v6.hp + defend->vs.v7.hp;
        nb += defend->vs.v8.hp + defend->vs.v9.hp + defend->vs.v10.hp;
        nb += defend->vs.v11.hp + defend->vs.v12.hp + defend->vs.v13.hp;
        return (nb + defend->vs.v14.hp);
    }
    if (defend->vs.ctr == 15) {
        nb += defend->vs.v2.hp + defend->vs.v3.hp + defend->vs.v4.hp;
        nb += defend->vs.v5.hp + defend->vs.v6.hp + defend->vs.v7.hp;
        nb += defend->vs.v8.hp + defend->vs.v9.hp + defend->vs.v10.hp;
        nb += defend->vs.v11.hp + defend->vs.v12.hp + defend->vs.v13.hp;
        return (nb + defend->vs.v14.hp + defend->vs.v15.hp);
    }
    return nb;
}

float find_hp4(defender_t *defend, float nb)
{
    if (defend->vs.ctr == 11) {
        nb += defend->vs.v2.hp + defend->vs.v3.hp + defend->vs.v4.hp;
        nb += defend->vs.v5.hp + defend->vs.v6.hp + defend->vs.v7.hp;
        nb += defend->vs.v8.hp + defend->vs.v9.hp + defend->vs.v10.hp;
        return (nb + defend->vs.v11.hp);
    }
    if (defend->vs.ctr == 12) {
        nb += defend->vs.v2.hp + defend->vs.v3.hp + defend->vs.v4.hp;
        nb += defend->vs.v5.hp + defend->vs.v6.hp + defend->vs.v7.hp;
        nb += defend->vs.v8.hp + defend->vs.v9.hp;
        return (nb + defend->vs.v11.hp + defend->vs.v12.hp);
    }
    if (defend->vs.ctr == 13) {
        nb += defend->vs.v2.hp + defend->vs.v3.hp + defend->vs.v4.hp;
        nb += defend->vs.v5.hp + defend->vs.v6.hp + defend->vs.v7.hp;
        nb += defend->vs.v8.hp + defend->vs.v9.hp + defend->vs.v10.hp;
        nb += defend->vs.v11.hp + defend->vs.v12.hp + defend->vs.v13.hp;
        return nb;
    }
    return find_hp5(defend, nb);
}

float find_hp3(defender_t *defend, float nb)
{
    if (defend->vs.ctr == 8) {
        nb += defend->vs.v2.hp + defend->vs.v3.hp + defend->vs.v4.hp;
        nb += defend->vs.v5.hp + defend->vs.v6.hp + defend->vs.v7.hp;
        nb += defend->vs.v8.hp;
        return nb;
    }
    if (defend->vs.ctr == 9) {
        nb += defend->vs.v2.hp + defend->vs.v3.hp + defend->vs.v4.hp;
        nb += defend->vs.v5.hp + defend->vs.v6.hp + defend->vs.v7.hp;
        nb += defend->vs.v8.hp + defend->vs.v9.hp;
        return nb;
    }
    if (defend->vs.ctr == 10) {
        nb += defend->vs.v2.hp + defend->vs.v3.hp + defend->vs.v4.hp;
        nb += defend->vs.v5.hp + defend->vs.v6.hp + defend->vs.v7.hp;
        nb += defend->vs.v8.hp + defend->vs.v9.hp + defend->vs.v10.hp;
        return nb;
    }
    return find_hp4(defend, nb);
}

float find_hp2(defender_t *defend, float nb)
{
    if (defend->vs.ctr == 5) {
        nb += defend->vs.v2.hp + defend->vs.v3.hp + defend->vs.v4.hp;
        nb += defend->vs.v5.hp;
        return nb;
    }
    if (defend->vs.ctr == 6) {
        nb += defend->vs.v2.hp + defend->vs.v3.hp + defend->vs.v4.hp;
        nb += defend->vs.v5.hp + defend->vs.v6.hp;
        return nb;
    }
    if (defend->vs.ctr == 7) {
        nb += defend->vs.v2.hp + defend->vs.v3.hp + defend->vs.v4.hp;
        nb += defend->vs.v5.hp + defend->vs.v6.hp + defend->vs.v7.hp;
        return nb;
    }
    return find_hp3(defend, nb);
}

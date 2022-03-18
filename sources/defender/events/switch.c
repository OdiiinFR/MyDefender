/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** switch
*/

#include "defender.h"

char test_1(defender_t *defend, int flag, sfEvent event)
{
    if (event.key.code == sfKeyA)
        return 'A';
    if (event.key.code == sfKeyB)
        return 'B';
    if (event.key.code == sfKeyC)
        return 'C';
    if (event.key.code == sfKeyD)
        return 'D';
    if (event.key.code == sfKeyE)
        return 'E';
    if (event.key.code == sfKeyF)
        return 'F';
    if (event.key.code == sfKeyG)
        return 'G';
    return test_2(defend, flag, event);
}

char test_2(defender_t *defend, int flag, sfEvent event)
{
    if (event.key.code == sfKeyH)
        return 'H';
    if (event.key.code == sfKeyI)
        return 'I';
    if (event.key.code == sfKeyJ)
        return 'J';
    if (event.key.code == sfKeyK)
        return 'K';
    if (event.key.code == sfKeyL)
        return 'L';
    if (event.key.code == sfKeyM)
        return 'M';
    if (event.key.code == sfKeyN)
        return 'N';
    return test_3(defend, flag, event);
}

char test_3(defender_t *defend, int flag, sfEvent event)
{
    if (event.key.code == sfKeyO)
        return 'O';
    if (event.key.code == sfKeyP)
        return 'P';
    if (event.key.code == sfKeyQ)
        return 'Q';
    if (event.key.code == sfKeyR)
        return 'R';
    if (event.key.code == sfKeyS)
        return 'S';
    if (event.key.code == sfKeyT)
        return 'T';
    if (event.key.code == sfKeyU)
        return 'U';
    return test_4(defend, flag, event);
}

char test_4(defender_t *defend, int flag, sfEvent event)
{
    if (event.key.code == sfKeyV)
        return 'V';
    if (event.key.code == sfKeyW)
        return 'W';
    if (event.key.code == sfKeyX)
        return 'X';
    if (event.key.code == sfKeyY)
        return 'Y';
    if (event.key.code == sfKeyZ)
        return 'Z';
    if (flag == 0)
        return defend->params.inv[0];
    else
        return defend->params.buy[0];
}

void key_press2(defender_t *defend, sfEvent event)
{
    if (defend->fen == 2)
        defend->fen = 5;
    else if (defend->fen == 5)
        defend->fen = 2;
    if (defend->fen == 1 || defend->fen == 3 || defend->fen == 4)
        defend->fen = 0;
    if (defend->fen == 7)
        defend->fen = 0;
    return;
}

/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** main
*/

#include "defender.h"

int main(int argc, char **argv)
{
    if (argc > 2)
        return error_args();
    if (argc == 1)
        return set_up("no file");
    if (strcompare("-h\0", argv[1]) == 0)
        return usage();
    if (check_file(argv[1]) == 1)
        return null_file();
    return set_up(argv[1]);
}

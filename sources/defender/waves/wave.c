/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** wave
*/

#include "defender.h"

wave_t set_wave(char *str)
{
    wave_t new;
    int fdfile = open(str, O_RDONLY);
    int size5 = 50;
    size_t e = size5;
    char *str5;

    new.map = 0;
    if (fdfile != -1) {
        str5 = malloc(sizeof(char) * size5);
        read(fdfile, str5, e);
        str5[size5] = '\0';
        new.wavefile = str5;
        new.len5 = find_len(str5);
        new.map = 10;
    }
    new.wavelvl1 = wave1(&new);
    new.wavelvl2 = wave2(&new);
    new.wavelvl3 = wave3(&new);
    new.wavelvl4 = wave4(&new);
    return set_wave2(new);
}

char *wave1(wave_t *new)
{
    int fd1 = open("maps/wave1.txt", O_RDONLY);
    int size1 = 50;
    size_t a = size1;
    char *str1 = malloc(sizeof(char) * (size1 + 1));

    read(fd1, str1, a);
    str1[size1] = '\0';
    new->len1 = find_len(str1);
    close(fd1);
    return str1;
}

char *wave2(wave_t *new)
{
    int fd2 = open("maps/wave2.txt", O_RDONLY);
    int size2 = 50;
    size_t b = size2;
    char *str2 = malloc(sizeof(char) * (size2 + 1));

    read(fd2, str2, b);
    str2[size2] = '\0';
    new->len2 = find_len(str2);
    close(fd2);
    return str2;
}

char *wave3(wave_t *new)
{
    int fd3 = open("maps/wave3.txt", O_RDONLY);
    int size3 = 50;
    size_t c = size3;
    char *str3 = malloc(sizeof(char) * (size3 + 1));

    read(fd3, str3, c);
    str3[size3] = '\0';
    new->len3 = find_len(str3);
    close(fd3);
    return str3;
}

char *wave4(wave_t *new)
{
    int fd4 = open("maps/wave4.txt", O_RDONLY);
    int size4 = 50;
    size_t d = size4;
    char *str4 = malloc(sizeof(char) * (size4 + 1));

    read(fd4, str4, d);
    str4[size4] = '\0';
    new->len4 = find_len(str4);
    close(fd4);
    return str4;
}

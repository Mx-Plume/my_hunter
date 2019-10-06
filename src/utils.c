/*
** EPITECH PROJECT, 2018
** Utils for my programs
** File description:
** my_strlen
*/

#include "my.h"

int my_strlen(char *str)
{
    int nc = 0;

    while (str[nc] != '\0')
        nc = nc +1;
    return (nc);
}

/*
** EPITECH PROJECT, 2021
** itoa.c
** File description:
** itoa
*/

#include <stdlib.h>
#include "../../include/my.h"

int my_intlen(int nb)
{
    int div = 1;
    int count = 0;

    if (nb < 0)
        nb = nb * (-1);
    while (nb / div > 0) {
        div = div * 10;
        count++;
    }
    return (count);
}

char *my_itoa(int nb)
{
    if (nb == 0)
        return "0";
    int i = my_intlen(nb);
    int neg = (nb < 0);
    char *str = malloc(sizeof(char) * (i + neg + 1));

    if (!str)
        return (NULL);
    str[i + neg] = '\0';
    nb *= (neg == 1) ? -1 : 1;
    for (; i > 0; --i) {
        str[i + neg - 1] = (nb % 10) + 48;
        nb /= 10;
    }
    str[0] = (neg == 1) ? '-' : str[0];
    return (str);
}
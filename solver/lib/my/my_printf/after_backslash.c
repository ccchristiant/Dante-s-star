/*
** EPITECH PROJECT, 2021
** after_backslash.c
** File description:
** ctran
*/

#include "stdlib.h"
#include "../../../include/my.h"

void after_backslash(const char *format, int i)
{
    int nb = d_to_normal_base(format[i], 8);
    char *str = my_itoa(nb);

    my_putchar('\\');
    switch (my_strlen(str)) {
    case 1:
        my_putstr("00");
        break;
    case 2:
        my_putstr("0");
        break;
    }
    my_put_nbr(nb);
    free(str);
}
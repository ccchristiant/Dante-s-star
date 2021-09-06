/*
** EPITECH PROJECT, 2021
** wrapper_2.c
** File description:
** ctran
*/

#include "../../../include/my.h"
#include <stdarg.h>
#include <stdlib.h>

void wrapper_my_putchar_oct(va_list list)
{
    char c = (char)va_arg(list, int);
    int nb = d_to_normal_base(c, 8);
    char *str = my_itoa(nb);

    if (c < 32 || c > 126) {
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
    }
    else
        my_putchar(c);
    free(str);
}

void wrapper_my_putstr_oct(va_list list)
{
    char *str = my_strdup(va_arg(list, char *));

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] > 126)
            after_backslash(str, i);
        else
            my_putchar(str[i]);
    }
    free(str);
}

void wrapper_my_put_hex(va_list list)
{
    my_put_nbr_base("0123456789abcdef", va_arg(list, unsigned int));
}

void wrapper_my_put_hex_maj(va_list list)
{
    my_put_nbr_base("0123456789ABCDEF", va_arg(list, unsigned int));
}
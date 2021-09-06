/*
** EPITECH PROJECT, 2021
** my_put_error.c
** File description:
** ctran
*/

#include <unistd.h>

void my_put_error_int(int i)
{
    write(2, &i, sizeof(i));
}
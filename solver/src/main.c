/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main function
*/

#include "../include/my.h"
#include "../include/struct.h"

char **my_maze(char *path, all_s *all)
{
    if (init(all, path) == 1)
        return (NULL);
    init_tab(all);
    get_int_maze(all);
    char **ok = malloc(sizeof(char *) * 1);
    ok[0] = "OK";
    if (my_engine_s(all) == 1)
        return (ok);
    display_maze(all);
    return (NULL);
}

int main(int ac, char **av)
{
    all_s *all = malloc(sizeof(all_s));
    all->data = malloc(sizeof(data_s));
    if (ac != 2)
        return (84);
    if (my_maze(av[1], all) == NULL)
        return (84);
    else
        return (0);
}
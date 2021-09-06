/*
** EPITECH PROJECT, 2021
** engine.c
** File description:
** engine
*/

#include <stdlib.h>
#include "../include/my.h"

void engine(all_s *all)
{
    while (!is_empty(all->root)) {
        init_neighbor(all);
        which_direction(all);
        all->data->neighbor[0][all->data->len_d] = 4;
        if (all->data->neighbor[0][0] != 4) {
            int next_dir = all->data->neighbor[0][rand() % all->data->len_d];
            check(all, next_dir);
            check1(all, next_dir);
        } else {
            pop(&all->root);
            if (!is_empty(all->root)) {
                all->data->pos_x = peek(all->root, 0);
                all->data->pos_y = peek(all->root, 1);
            }
        }
    }
}

void imperfect(data_s *data, int x, int y)
{
    if (data->ac == 3) {
        data->maze[0][0] = '*';
        data->maze[0][1] = '*';
        data->maze[1][0] = '*';
        data->maze[1][1] = '*';
        for (int i = 0; i != y; i++) {
            for (int j = 0; j != x; j++) {
            }
            write(1, data->maze[i], data->x);
            if (i < y - 1)
                write(1, "\n", 1);
        }
    }
}

void display_maze(data_s *data, int x, int y)
{
    if (y % 2 == 0)
        data->maze[y - 1][x - 1] = '*';
    if (x % 2 == 0) {
        data->maze[y - 1][x - 2] = '*';
        data->maze[y - 1][x - 1] = '*';
    }
    imperfect(data, x, y);
    data->maze[0][0] = '*';
    if (data->ac == 4) {
        for (int i = 0; i != y; i++) {
            write(1, data->maze[i], data->x);
            if (i < y - 1)
                write(1, "\n", 1);
        }
    }
}
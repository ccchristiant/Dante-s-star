/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main function
*/

#include "../include/my.h"
#include "../include/struct.h"

void get_value(all_s *all, char *buffer)
{
    for (int i = 0; buffer[i] != '\n'; i++)
        all->data->x++;
    all->data->x++;
    int p = 0;
    for (p = 0; buffer[p] != '\0'; p++) {
        if (buffer[p] == '\n')
            all->data->y++;
    }
    if (buffer[p - 1] != '\n')
        all->data->y++;
}

int init(all_s *all, char *path)
{
    all->root = NULL;
    srand((unsigned) time(NULL));
    struct stat sb;
    stat(path, &sb);
    int size = sb.st_size;
    if (size == - 1 || size == 0)
        return (1);
    all->data->pos_x = 0;
    all->data->pos_y = 0;
    all->data->x = 0;
    all->data->y = 0;
    all->data->buffer = malloc(sizeof(char) * (size + 1));
    int fd = open(path, O_RDONLY);
    if (fd == -1)
        return (1);
    read(fd, all->data->buffer, size);
    push(&all->root, all->data->pos_x, all->data->pos_y);
    get_value(all, all->data->buffer);
    return (0);
}

void start_engine(all_s *all)
{
    all->data->len_d = 0;
    all->data->neighbor = malloc(sizeof(int *) * 1);
    for (int i = 0; i != 1; i++)
        all->data->neighbor[i] = malloc(sizeof(int) * 5);
}

int my_engine_s(all_s *all)
{
    while (all->data->int_maze[all->data->y - 1][all->data->x - 2] != 2) {
        start_engine(all);
        get_neighbor(all);
        all->data->neighbor[0][all->data->len_d] = 4;
        if (all->data->neighbor[0][0] != 4)
            direction_1(all);
        else {
            pop(&all->root);
            if (!is_empty(all->root)) {
                all->data->int_maze[all->data->pos_y][all->data->pos_x] = 3;
                all->data->pos_x = peek(all->root, 0);
                all->data->pos_y = peek(all->root, 1);
            }
            if (is_empty(all->root)
            || all->data->my_maze[all->data->y - 1][all->data->x - 2] == 'X') {
                my_putstr("no solution found");
                return (1);
            }
        }
    }
}

void display_maze(all_s *all)
{
    for (int i = 0; i != all->data->y; i++) {
        for (int j = 0; j != all->data->x - 1; j++) {
            if (all->data->int_maze[i][j] == 2)
                all->data->my_maze[i][j] = 'o';
        }
        my_putstr(all->data->my_maze[i]);
    }
}
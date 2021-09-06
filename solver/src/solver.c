/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main function
*/

#include "../include/my.h"
#include "../include/struct.h"

void init_tab(all_s *all)
{
    int k = 0;
    all->data->my_maze = malloc(sizeof(char *) * (all->data->y + 1));
    all->data->int_maze = malloc(sizeof(int *) * (all->data->y + 1));
    for (int i = 0; i != all->data->y; i++) {
        all->data->my_maze[i] = malloc(sizeof(char) * (all->data->x + 1));
        all->data->int_maze[i] = malloc(sizeof(int) * (all->data->x + 1));
    }
    for (int i = 0; i != all->data->y; i++) {
        for (int j = 0; j != all->data->x; j++, k++) {
            if (all->data->buffer[k] == '*'
                || all->data->buffer[k] == 'X' || all->data->buffer[k] == '\n')
                all->data->my_maze[i][j] = all->data->buffer[k];
        }
    }
}

void get_int_maze(all_s *all)
{
    for (int i = 0; i != all->data->y; i++) {
        for (int j = 0; j != all->data->x - 1; j++) {
            if (all->data->my_maze[i][j] == '*')
                all->data->int_maze[i][j] = 1;
            if (all->data->my_maze[i][j] == 'X')
                all->data->int_maze[i][j] = 0;
        }
    }
    all->data->int_maze[0][0] = 2;
}

void direction_2(all_s *all, int next_dir)
{
    if (next_dir == 2) {
        all->data->pos_x = peek(all->root, 0) + 1;
        push(&all->root, all->data->pos_x, all->data->pos_y);
        all->data->int_maze[all->data->pos_y][all->data->pos_x] = 2;
    }
    if (next_dir == 3) {
        all->data->pos_x = peek(all->root, 0) - 1;
        push(&all->root, all->data->pos_x, all->data->pos_y);
        all->data->int_maze[all->data->pos_y][all->data->pos_x] = 2;
    }
}

void direction_1(all_s *all)
{
    int next_dir = all->data->neighbor[0][rand() % all->data->len_d];
    if (next_dir == 0) {
        all->data->pos_y = peek(all->root, 1) - 1;
        push(&all->root, all->data->pos_x, all->data->pos_y);
        all->data->int_maze[all->data->pos_y][all->data->pos_x] = 2;
    }
    if (next_dir == 1) {
        all->data->pos_y = peek(all->root, 1) + 1;
        push(&all->root, all->data->pos_x, all->data->pos_y);
        all->data->int_maze[all->data->pos_y][all->data->pos_x] = 2;
    }
    direction_2(all, next_dir);
}

void get_neighbor(all_s *all)
{
    if (all->root->y > 0
        && all->data->int_maze[all->root->y - 1][all->root->x] == 1) {
        all->data->neighbor[0][all->data->len_d] = 0;
        all->data->len_d++;
    }
    if (all->root->y <= all->data->y - 2
        && all->data->int_maze[all->root->y + 1][all->root->x] == 1) {
        all->data->neighbor[0][all->data->len_d] = 1;
        all->data->len_d++;
    }
    if (all->root->x <= all->data->x
        && all->data->int_maze[all->root->y][all->root->x + 1] == 1) {
        all->data->neighbor[0][all->data->len_d] = 2;
        all->data->len_d++;
    }
    if (all->root->x > 0
        && all->data->int_maze[all->root->y][all->root->x - 1] == 1) {
        all->data->neighbor[0][all->data->len_d] = 3;
        all->data->len_d++;
    }
}
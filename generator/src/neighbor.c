/*
** EPITECH PROJECT, 2021
** manage_neighbor.c
** File description:
** check
*/

#include "../include/my.h"

void init_neighbor(all_s *all)
{
    all->data->len_d = 0;
    all->data->neighbor = malloc(sizeof(int *) * 1);
    for (int i = 0; i != 1; i++)
        all->data->neighbor[i] = malloc(sizeof(int) * 5);
}

void which_direction(all_s *all)
{
    if (all->root->y >= 2
        && all->data->check_visited[all->root->y - 2][all->root->x] == 0) {
        all->data->neighbor[0][all->data->len_d] = 0;
        all->data->len_d++;
    }
    if (all->root->y <= all->data->y - 3
        && all->data->check_visited[all->root->y + 2][all->root->x] == 0) {
        all->data->neighbor[0][all->data->len_d] = 1;
        all->data->len_d++;
    }
    if (all->root->x <= all->data->x - 3
        && all->data->check_visited[all->root->y][all->root->x + 2] == 0) {
        all->data->neighbor[0][all->data->len_d] = 2;
        all->data->len_d++;
    }
    if (all->root->x >= 2
        && all->data->check_visited[all->root->y][all->root->x - 2] == 0) {
        all->data->neighbor[0][all->data->len_d] = 3;
        all->data->len_d++;
    }
}

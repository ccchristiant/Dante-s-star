/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main function
*/

#include "../include/struct.h"
#include "../include/my.h"

void init(all_s *all, int x, int y)
{
    all->data->maze = malloc(sizeof(char *) * y);
    for (int i = 0; i != y; i++) {
        all->data->maze[i] = malloc(sizeof(char) * (x + 1));
        for (int j = 0; j != x; j++) {
            all->data->maze[i][j] = 'X';
        }
    }

    all->data->check_visited = malloc(sizeof(int *) * y);
    for (int i = 0; i != y; i++)
        all->data->check_visited[i] = malloc(sizeof(int) * x);
    all->root = NULL;
    all->data->check_visited[0][0] = 1;
    all->data->pos_x = 0;
    all->data->pos_y = 0;
}

char **maze_generator(int x, int y, all_s *all)
{
    if (x == 1 && y == 1) {
        my_putstr("*\n");
        return NULL;
    }
    init(all, x, y);
    srand((unsigned) time(NULL));
    push(&all->root, all->data->pos_x, all->data->pos_y);
    engine(all);
    display_maze(all->data, x, y);
}

int main(int ac, char **av, char **env)
{
    all_s *all = malloc(sizeof(all_s));
    all->data = malloc(sizeof(data_s));
    all->data->x = my_getnbr(av[1]);
    all->data->y = my_getnbr(av[2]);
    all->data->ac = ac;
    if (ac != 3 && ac != 4)
        return (84);
    if (ac == 3)
        maze_generator(my_getnbr(av[1]), my_getnbr(av[2]), all);
    if (ac == 4 && my_strcmp("perfect", av[3]) == 0)
        maze_generator(my_getnbr(av[1]), my_getnbr(av[2]), all);
    return 0;
}
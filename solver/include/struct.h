/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** struct header
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include <stdarg.h>
#include <sys/types.h>

//WRAPPER
struct match_printf {
    char c;
    void (*function)(va_list list);
};

typedef struct match_printf c_f;

struct match_minishell_1 {
    char *command;
    void (*function)(char **command_line, char ***env);
};

//LINKED LISTS
typedef struct linked_list_int
{
    int data;
    struct linked_list_int *next;
}linked_list_int_t;

typedef struct linked_list_str
{
    char *data;
    struct linked_list_str *next;
}linked_list_str_t;

struct stacknode {
    int x;
    int y;
    struct stacknode *next;
};

typedef struct data_t
{
    int x;
    int y;
    char **maze;
    char **my_maze;
    int **int_maze;
    int **check_visited;
    int **neighbor;
    int len_d;
    int pos_x;
    int pos_y;
    int ac;
    char *buffer;
}data_s;

typedef struct all_t
{
    data_s *data;
    struct stacknode *root;
}all_s;

#endif
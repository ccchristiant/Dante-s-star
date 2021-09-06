/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** contains the prototypes of all the functions exposed by your libmy.a
*/

#ifndef MY_H_
#define MY_H_

#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "struct.h"

void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int n);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int p);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(char const *str, int size);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_show_word_array(char * const *tab);
char *my_strdup(char const *src);
char **my_str_to_word_array(char const *str);
void str_swap(char *str1[], char *str2[]);
char *longest(char *nbr1, char *nbr2);
char **my_str_to_word_array_delim(char const *str, char const sep);
char *my_itoa(int nb);
char *my_memset(char *str, char a, int b);
void my_put_error(char *str);
int fs_open_file(char const *filepath);
char *load_file_in_mem(char const *filepath);
int my_tab_length(char **tab);
void free_double_tab(char **tab);
void my_put_error_int(int i);
void init_tab(all_s *all);
void get_int_maze(all_s *all);
void direction_2(all_s *all, int next_dir);
void direction_1(all_s *all);
int init(all_s *all, char *path);
void get_neighbor(all_s *all);
int my_engine_s(all_s *all);
void display_maze(all_s *all);

//PRINTF
#include <stdarg.h>

int my_printf(const char *format, ...);
void wrapper_my_put_nbr(va_list list);
void wrapper_my_putchar(va_list list);
void wrapper_my_putstr(va_list list);
void wrapper_my_put_bin(va_list list);
void wrapper_my_put_oct(va_list list);
void wrapper_my_putchar_oct(va_list list);
void wrapper_my_putstr_oct(va_list list);
void wrapper_my_put_hex(va_list list);
void wrapper_my_put_hex_maj(va_list list);
int d_to_normal_base(int dec, int len_base);
void my_put_nbr_base(char const *base, int nb);
void after_backslash(const char *format, int i);

struct stacknode *new_node(int x, int y);
int is_empty(struct stacknode *root);
void push(struct stacknode **root, int x, int y);
int pop(struct stacknode **root);
int peek(struct stacknode *root, int who);

#endif
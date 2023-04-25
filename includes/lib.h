/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#ifndef LIB_H
    #define LIB_H

    #include <unistd.h>
    #include <stdarg.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <fcntl.h>
    #include <sys/stat.h>

    // getters prototypes

        int my_getnbr(char const *str);
        size_t my_strlen(char const *str);

    // checkers prototypes

        int my_str_is_num(const char *str);
        int my_is_alpha_num(char c);
        int my_str_is_alpha_num(char *str);

    // print fucntions prototypes

        // string
            int my_putstr(char const *str);
            int my_error_output(char const *str);
        // char
            void my_putchar(char c);
        // int
            int my_put_nbr(int nb);
        // all
            int my_printf(const char *str, ...);

    // str functions prototypes

        // copy functions prototypes
            char *my_strcpy(char *dest, char const *src);
            char *my_strncpy(char *dest, char const *src, int n);

        // cat functions prototypes
            char *my_strcat(char *dest, char *src);
            char *my_strncat(char *dest, char *src, int nb);

        // dup functions prototypes
            char *my_strdup(char const *src);
            char *my_strndup(char *src, int len);

        // compare functions prototypes
            int my_strcmp(char const *s1, char const *s2);
            int my_strncmp(char *s1, char *s2, int n);

        // random functions prototypes
            char *my_revstr(char *str);
            char **my_str_to_word_array(char *str, char seperator);
            char *mu_strtrim(char const *s);

    // file functions prototypes
        int fline(const int fd, char **line);

#endif //LIB_H

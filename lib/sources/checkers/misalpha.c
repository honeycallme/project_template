/*
** EPITECH PROJECT, 2023
** project_template
** File description:
** TODO: add description
*/

#include "../../../includes/lib.h"

int is_alpha(const char c)
{
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int mstr_isalpha(const char *str)
{
    int i = 0;

    while (str[i]) {
        if (!is_alpha(str[i]))
            return 0;
        i++;
    }

    return 1;
}

int mstr_isalphanum(const char *str)
{
    int i = 0;

    while (str[i]) {
        if (!is_alpha(str[i]) && !is_num(str[i]))
            return 0;
        i++;
    }

    return 1;
}

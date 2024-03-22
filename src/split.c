/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:21:23 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/20 12:22:55 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char **split_string(const char *str)
{
    int count = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
        if (str[i] == ' ')
            count++;
    char **result = malloc((count + 2) * sizeof(char *));
    int start = 0;
    int index = 0;
    for (int i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            int size = i - start;
            result[index] = malloc((size + 1) * sizeof(char));
            strncpy(result[index], &str[start], size);
            result[index][size] = '\0';
            start = i + 1;
            index++;
        }
    }
    result[index] = NULL;
    return result;
}
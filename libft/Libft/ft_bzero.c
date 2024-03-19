/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:17:47 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/19 11:17:49 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *string, size_t n)
{
	char				*tabstring;
	unsigned int		i;

	tabstring = (char *) string;
	i = 0;
	while (i < n)
	{
		tabstring[i] = '\0';
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	tab[5] = "Salut";
// 	int i = 0;
// 	while (i < 5)
// 	{
// 		printf("%c \n", tab[i]);
// 		i++;
// 	}
// 	i = 0;
// 	ft_bzero(tab, 5);
// 	while (i < 5)
// 	{
// 		printf("%c \n", tab[i] + 48);
// 		i++;
// 	}
// }
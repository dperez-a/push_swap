/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:18:02 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/19 11:18:04 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		printf("%d", ft_isalnum(*argv[1]));
// 	}
// }
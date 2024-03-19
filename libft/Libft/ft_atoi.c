/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:17:39 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/19 11:17:41 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *TheString)
{
	int	i;
	int	resultat;
	int	signe;

	i = 0;
	resultat = 0;
	signe = 1;
	while (TheString[i] == 32 || (TheString[i] >= 9 && TheString[i] <= 13))
		i++;
	if (TheString[i] == '-' || TheString[i] == '+')
	{
		if (TheString[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (TheString[i] >= 48 && TheString[i] <= 57)
	{
		resultat = resultat * 10 + TheString[i] - 48;
		i++;
	}
	return (resultat * signe);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	printf("%d\n", ft_atoi("--5+4"));
// 	printf("%d\n", atoi("--5+4"));

// }
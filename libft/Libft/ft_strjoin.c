/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:23:46 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/19 11:23:48 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*def;
	int		i;
	int		j;

	i = 0;
	def = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2)+ 1);
	if (def == NULL)
		return (NULL);
	while (s1[i])
	{
		def[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		def[i] = s2[j];
		i++;
		j++;
	}
	def[i] = '\0';
	return (def);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%s\n", ft_strjoin("bonjour", "salut"));
// }
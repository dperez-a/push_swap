/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:24:26 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/19 11:24:28 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int searchedchar)
{
	char	*s;
	int		i;

	s = (char *)str;
	i = ft_strlen((str));
	while (i >= 0)
	{
		if (s[i] == (char)searchedchar)
		{
			return (s + i);
		}
		i--;
	}
	return (NULL);
}

//   #include <stdio.h>

//   int	main()
//   {
//   	char *test = "Bastien et emilie";	
//   	printf("%s", ft_strrchr(test, 'i'));
//   }
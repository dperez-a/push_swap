/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:23:22 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/19 11:23:24 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int searchedchar)
{
	char	*s;

	s = (char *)str;
	while (*s != (char)searchedchar)
	{
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}
	return (s);
}

//  #include <stdio.h>

//  int	main()
//  {
//  	char *test = "Bastien et emilie";	
//  	printf("%s", ft_strchr(test, 'i'));
//  }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:20:47 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/19 11:20:50 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;

	t1 = (unsigned char *) s1;
	t2 = (unsigned char *) s2;
	while (n--)
	{
		if (*t1 != *t2)
			return (*t1 - *t2);
		t1++;
		t2++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	printf("%d\n", ft_memcmp("salut", "selut", 2));
// 	printf("%d\n", memcmp("salut", "selut", 2));
// }
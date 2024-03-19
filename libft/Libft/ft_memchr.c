/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:20:41 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/19 11:20:43 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t			i;
	unsigned char	*tabmemoryblock;
	unsigned char	d;

	i = 0;
	tabmemoryblock = (unsigned char *) memoryBlock;
	d = (unsigned char)searchedChar;
	while (size > 0)
	{
		if (tabmemoryblock[i] == d)
			return (tabmemoryblock + i);
		i++;
		size--;
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%s", ft_memchr("sAlut", 65, 1));
// }
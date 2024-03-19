/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:06:24 by dperez-a          #+#    #+#             */
/*   Updated: 2023/11/23 16:12:52 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_pf(unsigned int num, size_t *counter, char *base)
{
	char	*str;

	str = ft_aux_pf(num, base);
	ft_putstr_pf(str, counter);
	free(str);
}
/*int main()
{
    size_t counter = 0;
    unsigned int num = 255;
    char *base = "0123456789abcdef";

    ft_puthex_pf(num, &counter, base);
    printf("\nPrinted %zu characters.\n", counter);

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:52:23 by vnieto-j          #+#    #+#             */
/*   Updated: 2024/03/18 12:26:03 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	a_is_sorted(t_node *stack_a)
{
	t_node	*temp;

	temp = stack_a;
	while (temp->next)
	{
		if (temp->nb > temp->next->nb)
			return (1);
		temp = temp->next;
	}
	return (0);
}

int	ft_bits_len(int argc)
{
	int	len;

	len = 0;
	while (argc)
	{
		len++;
		argc /= 2;
	}
	return (len);
}

int	nb_node(t_node *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

void	radix_sort(t_node **stack_a, t_node **stack_b, int argc)
{
	int	i;
	int	bits;
	int	arg;

	i = 0;
	bits = ft_bits_len(argc);
	while (i < bits)
	{
		arg = argc - 1;
		while (arg--)
		{
			if (((*stack_a)->index >> i & 1) == 0)
				push_b(stack_a, stack_b);
			else
				rotate(stack_a, 'a');
		}
		while (nb_node(*stack_b) != 0)
			push_a(stack_a, stack_b);
		i++;
	}
}

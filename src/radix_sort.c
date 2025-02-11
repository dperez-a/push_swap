/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:25:25 by dani_mm__         #+#    #+#             */
/*   Updated: 2025/02/11 11:40:27 by dperez-a         ###   ########.fr       */
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

void	radix_sort(t_node **stack_a, t_node **stack_b)
{
	int	size;
	int	bits;
	int	i;
	int	j;

	i = 0;
	size = ft_nodesize(*stack_a);
	bits = ft_bits_len(size);
	while (i < bits)
	{
		j = size;
		while (j--)
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:25:25 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/19 11:25:27 by dani_mm__        ###   ########.fr       */
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

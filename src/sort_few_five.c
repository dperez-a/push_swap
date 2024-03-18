/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few_five.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:53:28 by vnieto-j          #+#    #+#             */
/*   Updated: 2024/03/18 12:26:20 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_index_zero(t_node **stack_a, t_node **stack_b, int count)
{
	if (count == 1)
		push_b(stack_a, stack_b);
	if (count == 2)
	{
		swap(stack_a, 'a');
		push_b(stack_a, stack_b);
	}
	if (count == 3)
	{
		rotate(stack_a, 'a');
		rotate(stack_a, 'a');
		push_b(stack_a, stack_b);
	}
	if (count == 4)
	{
		reverse_rotate(stack_a, 'a');
		reverse_rotate(stack_a, 'a');
		push_b(stack_a, stack_b);
	}
	if (count == 5)
	{
		reverse_rotate(stack_a, 'a');
		push_b(stack_a, stack_b);
	}
}

void	ft_push_index_one(t_node **stack_a, t_node **stack_b, int count)
{
	if (count == 1)
		push_b(stack_a, stack_b);
	if (count == 2)
	{
		swap(stack_a, 'a');
		push_b(stack_a, stack_b);
	}
	if (count == 3)
	{
		rotate(stack_a, 'a');
		rotate(stack_a, 'a');
		push_b(stack_a, stack_b);
	}
	if (count == 4)
	{
		reverse_rotate(stack_a, 'a');
		push_b(stack_a, stack_b);
	}
}

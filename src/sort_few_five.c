/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few_five.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:25:38 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/19 11:25:40 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_index_zero(t_node **stack_a, t_node **stack_b, int counter)
{
	if (counter == 1)
		push_b(stack_a, stack_b);
	if (counter == 2)
	{
		swap(stack_a, 'a');
		push_b(stack_a, stack_b);
	}
	if (counter == 3)
	{
		rotate(stack_a, 'a');
		rotate(stack_a, 'a');
		push_b(stack_a, stack_b);
	}
	if (counter == 4)
	{
		reverse_rotate(stack_a, 'a');
		reverse_rotate(stack_a, 'a');
		push_b(stack_a, stack_b);
	}
	if (counter == 5)
	{
		reverse_rotate(stack_a, 'a');
		push_b(stack_a, stack_b);
	}
}

void	ft_push_index_one(t_node **stack_a, t_node **stack_b, int counter)
{
	if (counter == 1)
		push_b(stack_a, stack_b);
	if (counter == 2)
	{
		swap(stack_a, 'a');
		push_b(stack_a, stack_b);
	}
	if (counter == 3)
	{
		rotate(stack_a, 'a');
		rotate(stack_a, 'a');
		push_b(stack_a, stack_b);
	}
	if (counter == 4)
	{
		reverse_rotate(stack_a, 'a');
		push_b(stack_a, stack_b);
	}
}

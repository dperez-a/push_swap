/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:25:50 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/19 11:25:52 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_few(t_node **stack_a, t_node **stack_b, int argc)
{
	if (argc == 3)
		sort_two(stack_a);
	else if (argc == 4)
		sort_three(stack_a);
	else if (argc == 5 || argc == 6)
		sort_four_five(stack_a, stack_b, argc);
}

void	sort_two(t_node **stack_a)
{
	if (a_is_sorted(*stack_a) == 1)
		swap(stack_a, 'a');
}

void	sort_three(t_node **stack_a)
{
	const int	a = (*stack_a)->nb;
	const int	b = (*stack_a)->next->nb;
	const int	c = (*stack_a)->next->next->nb;

	if (a_is_sorted(*stack_a) == 1)
	{
		if (a > b && b < c && a < c)
			swap(stack_a, 'a');
		if (a < b && b > c && a > c)
			reverse_rotate(stack_a, 'a');
		if (a > b && b < c && a > c)
			rotate(stack_a, 'a');
		if (a < b && b > c && a < c)
		{
			swap(stack_a, 'a');
			rotate(stack_a, 'a');
		}
		if (a > b && b > c && a > c)
		{
			swap(stack_a, 'a');
			reverse_rotate(stack_a, 'a');
		}
	}
}

void	sort_four_five(t_node **stack_a, t_node **stack_b, int argc)
{
	if (argc == 5)
	{
		find_small_and_pb(stack_a, stack_b, argc);
		sort_three(stack_a);
		push_a(stack_a, stack_b);
	}
	if (argc == 6)
	{
		find_small_and_pb(stack_a, stack_b, argc);
		sort_three(stack_a);
		push_a(stack_a, stack_b);
		push_a(stack_a, stack_b);
	}
}

void	find_small_and_pb(t_node **stack_a, t_node **stack_b, int argc)
{
	t_node	*temp;
	int		count;

	count = 0;
	temp = (*stack_a);
	while (temp && temp != NULL)
	{
		count++;
		if (temp->index == 0)
			ft_push_index_zero(stack_a, stack_b, count);
		temp = temp->next;
	}
	if (argc == 6)
	{
		count = 0;
		temp = (*stack_a);
		while (temp && temp != NULL)
		{
			count++;
			if (temp->index == 1)
				ft_push_index_one(stack_a, stack_b, count);
			temp = temp->next;
		}
	}
}

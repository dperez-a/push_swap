/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:44:07 by viny              #+#    #+#             */
/*   Updated: 2024/03/18 12:23:55 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **stack, char c)
{
	t_node	*temp;

	if (!*stack || !(*stack)->next)
		return ;
	temp = (*stack)->next;
	(*stack)->next = temp->next;
	temp->next = (*stack);
	(*stack) = temp;
	if (c == 'a')
		ft_printf("sa\n");
	if (c == 'b')
		ft_printf("sb\n");
}

void	swap_ss(t_node **stack_a, t_node **stack_b, char c)
{
	swap(*&stack_a, c);
	swap(*&stack_b, c);
	ft_printf("ss\n");
}

void	rotate(t_node **stack, char c)
{
	t_node	*temp;

	if (!*stack || !(*stack)->next)
		return ;
	temp = (*stack);
	(*stack) = (*stack)->next;
	temp->next = NULL;
	ft_lstadd_back_ps(stack, temp);
	if (c == 'a')
		ft_printf("ra\n");
	else if (c == 'b')
		ft_printf("rb\n");
}

void	rotate_r(t_node **stack_a, t_node **stack_b, char c)
{
	rotate(*&stack_a, c);
	rotate(*&stack_b, c);
	ft_printf("rr\n");
}

void	reverse_rotate(t_node **stack, char c)
{
	t_node	*temp;
	t_node	*pre_last;
	t_node	*beginning;

	if (!*stack || !(*stack)->next)
		return ;
	beginning = (*stack);
	while ((*stack)->next != NULL)
	{
		pre_last = (*stack);
		(*stack) = (*stack)->next;
	}
	temp = (*stack);
	if (pre_last)
		pre_last->next = NULL;
	temp->next = beginning;
	(*stack) = temp;
	if (c == 'a')
		ft_printf("rra\n");
	else if (c == 'b')
		ft_printf("rrb\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:25:32 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/19 11:25:34 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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

void	reverse_rotate_r(t_node **stack_a, t_node **stack_b, char c)
{
	reverse_rotate(*&stack_a, c);
	reverse_rotate(*&stack_b, c);
	ft_printf("rrr\n");
}

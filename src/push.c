/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:25:18 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/19 11:25:19 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_node **stack_a, t_node **stack_b)
{
	t_node	*temp;

	if (!(*stack_b))
		return ;
	temp = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	temp->next = (*stack_a);
	(*stack_a) = temp;
	ft_printf("pa\n");
}

void	push_b(t_node **stack_a, t_node **stack_b)
{
	t_node	*temp;

	if (!(*stack_a))
		return ;
	temp = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	temp->next = (*stack_b);
	(*stack_b) = temp;
	ft_printf("pb\n");
}

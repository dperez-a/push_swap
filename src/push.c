/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:15:20 by vnieto-j          #+#    #+#             */
/*   Updated: 2024/03/18 16:08:42 by dperez-a         ###   ########.fr       */
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

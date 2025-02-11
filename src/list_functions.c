/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:24:59 by dani_mm__         #+#    #+#             */
/*   Updated: 2025/02/11 12:31:12 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back_ps(t_node **lst, t_node *new)
{
	t_node	*ptr;

	if (lst == NULL || new == NULL)
	{
		ft_printf("Pointer NULL in ft_lstadd_back_ps");
		return ;
	}
	ptr = *lst;
	if (lst != NULL)
	{
		if (*lst != NULL)
		{
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = new;
		}
		else
			*lst = new;
	}
}

void	ft_lstclear_ps(t_node **lst)
{
	t_node	*temp;

	if (!lst || !*lst)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		free (*lst);
		*lst = temp;
	}
}

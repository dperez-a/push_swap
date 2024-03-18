/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions_listes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:00:48 by vnieto-j          #+#    #+#             */
/*   Updated: 2024/03/18 12:22:51 by dperez-a         ###   ########.fr       */
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

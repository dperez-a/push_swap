/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:25:11 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/19 21:09:36 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit_error(t_node **stack)
{
	ft_printf("Error\n");
	ft_lstclear_ps(stack);
	exit(EXIT_FAILURE);
}

void	add_to_stack(t_node **stack, int nb)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		ft_exit_error(stack);
	new->nb = nb;
	new->index = -1;
	new->next = NULL;
	ft_lstadd_back_ps(stack, new);
}

int	ft_is_dupplicate(t_node **stack)
{
	t_node	*current;
	t_node	*check;

	current = (*stack);
	while (current != NULL)
	{
		check = current->next;
		while (check != NULL)
		{
			if (current->nb == check->nb)
				return (1);
			check = check->next;
		}
		current = current->next;
	}
	return (0);
}

int	ft_check_argv_is_digit(char *str)
{
	if (!str)
		return (1);
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9') && *str != '-')
			return (1);
		str++;
	}
	return (0);
}

t_node	*ft_nb_to_stack(int argc, char **argv)
{
	int		i;
	int		nb;
	t_node	*stack;

	i = 1;
	stack = NULL;
	while (i <= argc - 1)
	{
		if (ft_check_argv_is_digit(argv[i]) == 1)
			ft_exit_error(&stack);
		else
		{
			nb = ft_atol_ovrflw(argv[i], &stack);
			add_to_stack(&stack, nb);
		}
		i++;
	}
	if (ft_is_dupplicate(&stack) == 1)
		ft_exit_error(&stack);
	put_index_stack(&stack);
	return (stack);
}

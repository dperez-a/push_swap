/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:25:04 by dani_mm__         #+#    #+#             */
/*   Updated: 2025/02/11 13:17:42 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_nodesize(t_node *stack)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = stack;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	ft_free_strstr(char **str)
{
	int	i;

	i = 0;
	while (str && str[i])
		free(str[i++]);
	free(str);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_split_to_stack(t_node **stack, char **split)
{
	int	nb;
	int	j;

	j = -1;
	while (split[++j])
	{
		if (ft_check_argv_is_digit(split[j]) == 1)
		{
			ft_free_strstr(split);
			ft_exit_error(stack);
		}
		else
		{
			nb = ft_atol_ovrflw(split[j], stack);
			add_to_stack(stack, nb);
		}
	}
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	if (argc < 2)
		exit (1);
	stack_a = ft_nb_to_stack(argc, argv, 1);
	stack_b = NULL;
	if (!stack_a)
		ft_exit_error(&stack_a);
	if (a_is_sorted(stack_a) == 1)
	{
		if (ft_nodesize(stack_a) < 6)
			ft_sort_few(&stack_a, &stack_b, ft_nodesize(stack_a));
		else
			radix_sort(&stack_a, &stack_b);
	}
	ft_lstclear_ps(&stack_a);
	ft_lstclear_ps(&stack_b);
}

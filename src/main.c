/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:20:07 by viny              #+#    #+#             */
/*   Updated: 2024/03/18 12:24:45 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	if (argc < 2)
		exit (1);
	stack_a = ft_nb_to_stack(argc, argv);
	stack_b = NULL;
	if (!stack_a)
		ft_exit_error(&stack_a);
	if (a_is_sorted(stack_a) == 1)
	{
		if (argc < 7)
			ft_sort_few(&stack_a, &stack_b, argc);
		else
			radix_sort(&stack_a, &stack_b, argc);
	}
	ft_lstclear_ps(&stack_a);
	ft_lstclear_ps(&stack_b);
}

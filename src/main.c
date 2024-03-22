/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:25:04 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/20 15:52:59 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//! En esta función main no paso los argumentos dados por split
/*int	main(int argc, char **argv)
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
}*/

int	main(int argc, char **argv)
{
    t_node	*stack_a;
    t_node	*stack_b;
    int i = 1;

    if (argc < 2)
        exit (1);
    stack_a = NULL;
    stack_b = NULL;
    while (i < argc)
    {
        char **numbers = split_string(argv[i]);
        int j = 0;
        while (numbers[j] != NULL)
        {
            t_node *new_stack = ft_nb_to_stack(2, (char *[]){argv[0], numbers[j], NULL});
            if (!new_stack)
                ft_exit_error(&stack_a);
            add_to_stack(&stack_a, new_stack->nb);
            j++;
        }
        free(numbers);
        i++;
    }
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
/*int	main(int argc, char **argv)
{
    t_node	*stack_a;
    t_node	*stack_b;
    int i = 1;

    if (argc < 2)
        exit (1);
    stack_a = NULL;
    stack_b = NULL;
    while (i < argc)
    {
        char **numbers = split_string(argv[i]);
        int j = 0;
        while (numbers[j] != NULL)
        {
            t_node *new_stack = ft_nb_to_stack(2, (char *[]){argv[0], numbers[j], NULL});
            if (!new_stack)
                ft_exit_error(&stack_a);
            add_to_stack(&stack_a, new_stack->nb);
            j++;
        }
        free(numbers);
        i++;
    }
    if (a_is_sorted(stack_a) == 1)
    {
        if (argc < 7)
            ft_sort_few(&stack_a, &stack_b, argc);
        else
            radix_sort(&stack_a, &stack_b, argc);
    }
    ft_lstclear_ps(&stack_a);
    ft_lstclear_ps(&stack_b);
}*/

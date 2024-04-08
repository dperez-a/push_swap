/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:25:04 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/25 13:15:51 by dani_mm__        ###   ########.fr       */
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

// Parte 1: Manejo de argumentos de línea de comandos
void handle_command_line_arguments(int argc)
{
    if (argc < 2)
        exit(1);
}

// Parte 2: Inicialización de las pilas
void initialize_stacks(t_node **stack_a, t_node **stack_b)
{
    *stack_a = NULL;
    *stack_b = NULL;
}

// Parte 3: Procesamiento de los argumentos
void process_arguments(int argc, char **argv, t_node **stack_a)
{
    int i = 1;
    while (i < argc)
    {
        char **numbers = split_string(argv[i]);
        int j = 0;
        while (numbers[j] != NULL) {
            t_node *new_stack = ft_nb_to_stack(2, (char *[]){argv[0], numbers[j], NULL});
            if (!new_stack)
                ft_exit_error(stack_a);
            add_to_stack(stack_a, new_stack->nb);
            j++;
        }
        free(numbers);
        i++;
    }
}

// Parte 4: Ordenamiento y limpieza
void sort_and_cleanup(t_node **stack_a, t_node **stack_b, int argc)
{
    if (a_is_sorted(*stack_a) == 1)
    {
        if (argc < 7)
            ft_sort_few(stack_a, stack_b, argc);
        else
            radix_sort(stack_a, stack_b, argc);
    }
    ft_lstclear_ps(stack_a);
    ft_lstclear_ps(stack_b);
}

// Función main que llama a las partes anteriores
int	main(int argc, char **argv)
{
    t_node *stack_a;
    t_node *stack_b;

    // Parte 1: Manejo de argumentos de línea de comandos
    handle_command_line_arguments(argc);

    // Parte 2: Inicialización de las pilas
    initialize_stacks(&stack_a, &stack_b);

    // Parte 3: Procesamiento de los argumentos
    process_arguments(argc, argv, &stack_a);

    // Parte 4: Ordenamiento y limpieza
    sort_and_cleanup(&stack_a, &stack_b, argc);

    return 0;
}

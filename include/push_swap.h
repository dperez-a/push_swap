/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:47:14 by dani_mm__         #+#    #+#             */
/*   Updated: 2025/02/11 13:10:15 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include <sys/types.h>
# include <fcntl.h>
# include <stddef.h>
# include "../libft/Libft/libft.h"

typedef struct s_node
{
	int				nb;
	int				index;
	struct s_node	*next;
}	t_node;

void	ft_exit_error(t_node **stack);
void	ft_lstadd_back_ps(t_node **lst, t_node *new);
void	ft_lstclear_ps(t_node **lst);
void	swap(t_node **stack, char c);
void	swap_ss(t_node **stack_a, t_node **stack_b, char c);
void	rotate(t_node **stack, char c);
void	rotate_r(t_node **stack_a, t_node **stack_b, char c);
void	reverse_rotate(t_node **stack, char c);
void	reverse_rotate_r(t_node **stack_a, t_node **stack_b, char c);
void	push_a(t_node **stack_a, t_node **stack_b);
void	push_b(t_node **stack_a, t_node **stack_b);
int		main(int argc, char **argv);
void	add_to_stack(t_node **stack, int the_nb);
int		ft_is_duplicate(t_node **stack);
int		ft_check_argv_is_digit(char *string);
t_node	*ft_nb_to_stack(int argc, char **argv, int i);
void	ft_sort_few(t_node **stack_a, t_node **stack_b, int argc);
void	sort_two(t_node **stack_a);
void	sort_three(t_node **stack_a);
int		return_pos(t_node **stack);
void	sort_pa_five_move_i_three(t_node **stack_a);
void	sort_pa_five_move_i_four(t_node **stack_a);
// void	sort_pa_four(t_node **stack_a);
// void	sort_pa_five(t_node **stack_a);
int		a_is_sorted(t_node *stack_a);
int		ft_atol_ovrflw(const char *string, t_node **stack);
int		ft_strcmp(const char *s1, const char *s2);
void	radix_sort(t_node **stack_a, t_node **stack_b);
int		nb_node(t_node *stack);
int		ft_bits_len(int argc);
void	print_stack(t_node **stack_a);
void	put_index_stack(t_node **stack_a);
void	put_index_stack_index(t_node *t, t_node **s_s, int s_nb);
void	sort_four_five(t_node **stack_a, t_node **stack_b, int argc);
void	find_small_and_pb(t_node **stack_a, t_node **stack_b, int argc);
void	ft_push_index_zero(t_node **stack_a, t_node **stack_b, int count);
void	ft_push_index_one(t_node **stack_a, t_node **stack_b, int count);
int		check_sign(int argc);
char	**split_string(const char *str);
// void	sort_and_cleanup(t_node **stack_a, t_node **stack_b, int argc);
void	process_arguments(int argc, char **argv, t_node **stack_a);
void	initialize_stacks(t_node **stack_a, t_node **stack_b);
void	handle_command_line_arguments(int argc);
int		ft_nodesize(t_node *stack);
void	ft_split_to_stack(t_node **stack, char **split);
void	ft_free_strstr(char **str);

#endif

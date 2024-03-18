/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-a <dperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:41:18 by vnieto-j          #+#    #+#             */
/*   Updated: 2024/03/18 17:50:48 by dperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_atol_ovrflw(const char *string, t_node **stack)
{
	long	res;
	long	sign;
	int		has_sign;

	res = 0;
	sign = 1;
	has_sign = 0;
	if (!string || ft_strcmp(string, "-2147483648") == 0)
		return (-2147483648);
	while (*string != '\0')
	{
		if ((*string == '-' || *string == '+') && has_sign++)
			ft_exit_error(stack);
		if (*string == '-' || *string == '+')
			sign = (*string++ == '-') ? -1 : 1;
		else if (*string >= '0' && *string <= '9')
		{
			if (res > INT_MAX / 10 || (res == INT_MAX / 10 && (*string - '0') > INT_MAX % 10))
				ft_exit_error(stack);
			res = res * 10 + (*string++ - '0');
		}
		else
			ft_exit_error(stack);
	}
	return (res * sign);
}


void	print_stack(t_node **stack_a)
{
	int		i;
	t_node	*temp;

	i = 1;
	temp = (*stack_a);
	while (temp)
	{
		ft_printf("%d noeud = %d et index = %d\n", i, temp->nb, temp->index);
		i++;
		temp = temp->next;
	}
}

void	put_index_stack(t_node **stack_a)
{
	t_node	*temp;
	t_node	*stock_small;
	int		i;
	int		s_nb;

	i = 0;
	while (1)
	{
		temp = (*stack_a);
		stock_small = NULL;
		s_nb = INT_MAX;
		put_index_stack_index(temp, &stock_small, s_nb);
		if (stock_small == NULL)
			break ;
		else
		{
			stock_small->index = i;
			i++;
		}
	}
}

void	put_index_stack_index(t_node *t, t_node **s_s, int s_nb)
{
	while (t != NULL)
	{
		if (t->index == -1 && s_nb >= t->nb)
		{
			s_nb = t->nb;
			*s_s = t;
		}
		t = t->next;
	}
}
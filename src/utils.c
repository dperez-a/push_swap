/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:26:03 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/19 14:55:25 by dani_mm__        ###   ########.fr       */
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

	sign = 1;
	res = 0;
	if (ft_strcmp(string, "-2147483648") == 0)
		return (-2147483648);
	if (*string == '-' || *string == '+')
	{
		if (*string == '-')
			sign *= -1;
		string++;
	}
	while (*string >= '0' && *string <= '9')
	{
		if (res > INT_MAX / 10 || (res == INT_MAX / 10
				&& (*string - '0') > INT_MAX % 10))
			ft_exit_error(stack);
		res = res * 10 + (*string - '0');
		string++;
	}
	return (res * sign);
} 

int check_sign(int argc)
{
    int sign_count;
	
    sign_count = 0;
    while (argc != '\0')
	{
        if (argc == '+' || argc == '-')
		{
            sign_count++;
            if (sign_count > 1)
			{
                return 0; // false
            }
        } 
		else if (argc < '0' || argc > '9')
		{
            // Carácter no válido
            return 0; // false
        }
        argc++;
    }
    return 1; // true
}


void	print_stack(t_node **stack_a)
{
	int		i;
	t_node	*temp;

	i = 1;
	temp = (*stack_a);
	while (temp)
	{
		ft_printf("%d nodo = %d index = %d\n", i, temp->nb, temp->index);
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

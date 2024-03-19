/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_mm__ <dani_mm__@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:17:30 by dani_mm__         #+#    #+#             */
/*   Updated: 2024/03/19 11:17:33 by dani_mm__        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int		ft_one(char *stash);
char	*ft_join(char *buff, char *stash);
int		ft_check_new_line(char *stash);
int		strln(char *str);
int		strlnao(char *str, char c);
void	init_and_put_one(char *stash, char c);
char	*ft_join(char *buff, char *stash);
char	*ft_join_new_line(char *buff, char *stash);
char	*get_next_line(int fd);
char	*init_buff(void);
char	*ft_condtion(char stash[BUFFER_SIZE], int fd, char *buff);

#endif
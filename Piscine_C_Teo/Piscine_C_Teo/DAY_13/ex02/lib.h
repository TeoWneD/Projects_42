/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsudarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/27 23:26:44 by tsudarov          #+#    #+#             */
/*   Updated: 2016/05/02 04:48:11 by tsudarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# define BUF_SIZE 1
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <fcntl.h>

int		ft_nb_octet(char *str);
int		ft_atoi(char *str);
int		ft_tail(int argc, char **argv);
void	ft_putstr(char *str);
void	ft_putchar(char c);

#endif

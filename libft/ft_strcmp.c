/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsudarov <tsudarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 00:41:58 by tsudarov          #+#    #+#             */
/*   Updated: 2016/10/07 18:50:22 by tsudarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = -1;
	while (s1[++i] != '\0' && s1[i] == s2[i])
		;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

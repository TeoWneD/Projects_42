/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsudarov <tsudarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 00:41:58 by tsudarov          #+#    #+#             */
/*   Updated: 2016/04/06 19:19:36 by tsudarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i1;
	int i2;

	i1 = 0;
	i2 = 0;
	while (s1[i1] != '\0' && s2[i2] != '\0' && s1[i1] == s2[i2])
	{
		i1++;
		i2++;
	}
	return (s1[i1] - s2[i2]);
}

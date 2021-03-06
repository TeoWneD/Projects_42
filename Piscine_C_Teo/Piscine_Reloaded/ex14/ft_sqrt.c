/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsudarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:59:57 by tsudarov          #+#    #+#             */
/*   Updated: 2016/11/08 15:35:43 by tsudarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int a;
	int res;

	a = 1;
	if (nb < 0)
		return (0);
	while (nb >= a * a)
	{
		res = nb / a;
		if (a == res && (nb % a) == 0)
		{
			return (a);
		}
		a++;
	}
	return (0);
}

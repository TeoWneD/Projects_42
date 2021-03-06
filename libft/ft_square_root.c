/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square_root.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsudarov <tsudarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/21 23:19:41 by tsudarov          #+#    #+#             */
/*   Updated: 2016/10/07 18:50:03 by tsudarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_square_root(int nb)
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
			return (a);
		a++;
	}
	return (0);
}

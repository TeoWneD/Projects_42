/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths_fractoil.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsudarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 15:02:14 by tsudarov          #+#    #+#             */
/*   Updated: 2017/12/27 15:02:15 by tsudarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void			fractol_fractoil_math(t_env *e, int i, t_c z)
{
	double		x;

	ft_init_z(e, z.cr, z.ci);
	i = 0;
	while ((e->z.zr * e->z.zr) + (e->z.zi * e->z.zi) < 4 &&
			++i < e->maxiter)
	{
		x = e->z.zr;
		ft_init_z(e, (e->z.zr + e->c.cr - e->z.zi + e->c.ci) / 2,
				x * 2 * (e->z.zi + e->z.zi + e->c.cr - e->z.zr) / 2);
	}
	e->col.innt = ((i >= e->maxiter) ? 45 + (45 << 8) + (35 << 16) :
			e->r + i * 15 + ((e->v + i * 25) << 8) + ((e->b + i * 8) << 16));
	mlx_img_drwpoint(&e->pos, &e->mp, &e->col);
}

int				fractol_fractoil_launcher(t_env *e)
{
	int			i;
	t_c			z;

	i = 0;
	e->code = 3;
	e->pos.x = -1;
	z.cr = e->center.cr - W_FRACTOL_WIDTH / 2 * e->zoom.x;
	z.ci = e->center.ci - W_FRACTOL_HEIGHT / 2 * e->zoom.x;
	while (++e->pos.x < W_FRACTOL_WIDTH)
	{
		z.ci = e->center.ci - W_FRACTOL_HEIGHT / 2 * e->zoom.x;
		e->pos.y = -1;
		while (++e->pos.y < W_FRACTOL_HEIGHT)
		{
			fractol_fractoil_math(e, i, z);
			z.ci += e->zoom.x;
		}
		z.cr += e->zoom.x;
	}
	return (0);
}

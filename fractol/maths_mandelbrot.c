/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths_mandelbrot.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsudarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 15:02:27 by tsudarov          #+#    #+#             */
/*   Updated: 2017/12/27 15:02:28 by tsudarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "libft/libft.h"
#include "mlx_cust_lib/mlx_cust.h"

void			fractol_mandelbrot_math(t_env *e, int i, t_c z)
{
	double		tmp;

	ft_init_z(e, 0, 0);
	ft_init_c(e, z.cr, z.ci);
	i = -1;
	while ((e->z.zr * e->z.zr) + (e->z.zi * e->z.zi) < 4 && ++i <= e->maxiter)
	{
		tmp = e->z.zr;
		ft_init_z(e, ((e->z.zr * e->z.zr) - (e->z.zi * e->z.zi) +
					e->c.cr), 2 * e->z.zi * tmp + e->c.ci);
	}
	e->col.innt = ((i >= e->maxiter) ? 0 + (0 << 8) + (0 << 16) :
			e->r + i * 5 + ((e->v + i * 25) << 8) + ((e->b + i * 45) << 16));
	mlx_img_drwpoint(&e->pos, &e->mp, &e->col);
}

int				fractol_mandelbrot_launcher(t_env *e)
{
	int			i;
	t_c			z;

	i = -1;
	e->pos.y = -1;
	e->code = 0;
	z.cr = e->center.cr - W_FRACTOL_WIDTH / 2 * e->zoom.x;
	z.ci = e->center.ci - W_FRACTOL_HEIGHT / 2 * e->zoom.x;
	while (++e->pos.y < W_FRACTOL_HEIGHT)
	{
		z.cr = e->center.cr - W_FRACTOL_WIDTH / 2 * e->zoom.x;
		e->pos.x = -1;
		while (++e->pos.x < W_FRACTOL_WIDTH)
		{
			fractol_mandelbrot_math(e, i, z);
			z.cr += e->zoom.x;
		}
		z.ci += e->zoom.x;
	}
	return (0);
}

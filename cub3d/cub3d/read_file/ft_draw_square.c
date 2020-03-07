/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 21:06:43 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/07 22:10:49 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw_square(int x, int y, int color)
{
	int		new_x;
	int		new_y;
	int		new_two_y;

	new_x = x + g_mydata.square_width;
	new_y = y + g_mydata.square_height;
	new_two_y = y;
	while (x <= new_x)
	{
		y = new_two_y;
		while (y <= new_y)
		{
			mlx_pixel_put(g_mydata.mlx_ptr, g_mydata.win_ptr, x, y, color);
			y++;
		}
		x++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 16:36:23 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/12 17:28:08 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw_player(int turn, int walk)
{
	double	newx;
	double	newy;

	g_player.direction += (g_player.rotation * turn);
	newx = ft_cos(g_player.direction) * g_player.mov_speed;
	newy = ft_sin(g_player.direction) * g_player.mov_speed;
	g_player.x += (newx * walk);
	g_player.y += (newy * walk);
	ft_draw_line();
	ft_draw_circle(g_player.x, g_player.y);
}

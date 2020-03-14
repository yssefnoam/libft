/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:28:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/14 20:32:24 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** TODO: the main function call the other function
*/

int main(int argc, char *argv[])
{
	if (argc == 2 || argc == 3)
	{
		ft_setup(argv[1]);
		mlx_hook(g_data.win_ptr, 2, 1L<<0, ft_deal_key, (void *)0);
		mlx_loop(g_data.mlx_ptr);
		exit(EXIT_SUCCESS);
	}
	else
	{
		ft_putstr_fd("cub3d: error: no input files\n", 2);
		exit(EXIT_FAILURE);
	}
}

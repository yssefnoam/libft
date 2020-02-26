/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:28:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/26 16:09:02 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int main(int argc, char *argv[])
{
	void *mlx_ptr;
	void *win_ptr;

	if (argc == 2)
	{
		read_file(argv[1]);
		win_ptr = mlx_new_window(mlx_ptr, map->win_wight, map->win_height, argv[0]);
		mlx_loop(mlx_ptr);
		exit(EXIT_SUCCESS);
	}
	ft_putstr_fd("Error: Argument.\n", 2);
	exit(EXIT_FAILURE);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 10:26:24 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/28 20:11:33 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	read_map(int fd, int lines, const char *file)
{
	int		i;

	i = 0;
	lines = get_height_weight(file, lines);
	/*
	map.ptr_matrix[lines] = NULL;
	get_next_line(fd, &(map.ptr_matrix[i++]));
	while(i < lines)
	{
		ft_check_map_line();
		get_next_line(fd, &(map.ptr_matrix[i++]));
	}
	close(fd);
	*/
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:18:39 by ynoam             #+#    #+#             */
/*   Updated: 2019/11/25 12:02:39 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_free(char **ptr)
{
	free(*ptr);
	*ptr = NULL;
	return (1);
}

int	get_next_line(int fd, char **line)
{
	ssize_t		r;
	char		*t;
	static char	*stk;
	int			file[4864];

	if ((r = 1) && (fd < 0 || BUFFER_SIZE < 1))
		return (-1);
	file[fd] = fd;
	if (!(t = (char *)malloc(BUFFER_SIZE + 1)))
		return (-1);
	while (ft_search(stk) && (r = read(file[fd], t, BUFFER_SIZE)) != 0)
	{
		if (r == -1 && ft_free(&t) && ft_free(&stk))
			return (-1);
		t[r] = '\0';
		if (!(stk = ft_join(stk, t)) && ft_free(&t))
			return (-1);
	}
	if (ft_free(&t) && !(*line = ft_sub(stk)) && ft_free(&stk))
		return (-1);
	if (!(stk = ft_from_newline(stk)) && ft_free(&stk))
		return (-1);
	if (r == 0 && ft_free(&stk))
		return (0);
	return (1);
}

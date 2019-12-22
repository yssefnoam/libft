/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 13:09:01 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/22 13:29:36 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"


int		ft_p(char *s)
{
	int		i;
	int		j;

	i = ft_strlen(s);
	j = -1;
	while (++j < i - 1)
		s[j] = s[j + 2];
	write(1, s, i - 2);
	return (i - 2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_f1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 17:20:51 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/26 16:26:15 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int		ft_f1(int sp, int zr, char **ptr, char *s)
{
	char		c;
	long int	a;

	c = **ptr;
	a = 0;
	if (c == 'd' || c == 'u' || c == 'i' || c == 'x' || c == 'X')
		a = ft_d_u_i(sp, zr, s, c);
	else if (c == 'p')
		a = ft_p(s, sp);
	else if (c == 's')
		a = ft_s(s, sp, zr);
	else if (c == 'c')
		a = ft_c(s, sp);
	return (a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 22:44:54 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/19 12:00:36 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_putstr(char *s, int k)
{
	long int	j;

	if (s == NULL)
		k++;
	j = ft_strlen(s);
	if (k + j > MAX_INT && ft_free(&s))
		return (-1);
	write(1, s, j);
	k = j + k;
	ft_free(&s);
	return (k);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:52:33 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/08 21:03:29 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_zero(int num)
{
	char	*ptr;

	if (num < 0)
	{
		ptr = malloc(1);
		ptr[0] = '\0';
	}
	else
	{
		ptr = malloc(num + 1);
		ptr[num] = '\0';
		while (num-- > 0)
			ptr[num] = '0';
	}
	return (ptr);
}

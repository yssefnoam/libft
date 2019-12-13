/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finish1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 09:44:53 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/13 21:45:53 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_finish1(char *s, int zero, char c)
{
	if (c == 's' && zero > 0)
		s[zero] = 0;
	else if ((c == 'd' || c == 'i' || c == 'x' || c == 'X' || c == 'u' || c == '%') && zero > (int)ft_strlen(s))
		(*s == '-') ? (s = ft_minus(s, zero)) : (s = ft_strjoin(ft_zero(zero - ft_strlen(s)), s));
	else if (c == 'p' && zero > (int)ft_strlen(s))
		s = ft_minus(s, zero);
	return (s);
}

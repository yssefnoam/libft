/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 11:38:47 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/01 21:50:25 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_printf(const char *p, ...)
{
	char	*s;
	va_list	ap;

	s = ft_strdup("");
	va_start(ap, p);
	while (*p != '\0')
	{
		if (*p++ == '%')
		{
			if (ft_is_convertion(*p))
			{

				s = ft_convertion(*p, ap);
				//if (ft_is_flage(*p))
				//	s = ft_flage();
			}
		}
		else
			s = ft_strjoin(s, ft_ctoa(*p));
	}
	va_end(ap);
	return (ft_putstr(s));
}

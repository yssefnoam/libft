/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 19:09:59 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/29 20:13:34 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *father, const char *son, size_t len)
{
	const char	*string1;
	const char	*string2;
	size_t		variable;
	size_t		lenthabc;

	lenthabc = ft_strlen(son);
	if (father == NULL || son == NULL)
		return ((char *)--father);
	while (len-- >= lenthabc)
	{
		string1 = son;
		string2 = father;
		variable = 0;
		while (*string2 == *string1 && *string1 != '\0')
		{
			string2++;
			string1++;
			variable++;
		}
		if (variable == lenthabc)
			return ((char *)father);
		father++;
	}
	return (NULL);
}

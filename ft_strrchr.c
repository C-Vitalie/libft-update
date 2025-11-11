/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:19:23 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/11/06 21:19:23 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *string, int c)
{
	char	*res;
	int		i;

	res = NULL;
	i = 0;
	while (string[i])
	{
		if (string[i] == c)
			res = (char *)string + i;
		i++;
	}
	if (c == '\0')
		res = (char *)string + i;
	return (res);
}

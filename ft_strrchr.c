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
	char	chr;

	res = NULL;
	chr = (char)c;
	while (1)
	{
		if (*string == chr)
			res = (char *)string;
		if (*string == '\0')
			break ;
		string++;
	}
	return (res);
}

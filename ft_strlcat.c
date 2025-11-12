/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:19:09 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/11/06 21:19:09 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	y;
	size_t	j;

	i = ft_strlen(dest);
	y = ft_strlen((char *)src);
	j = 0;
	//if (i + y >= size)
	//	return (i + y);
	while ((i + j < size) && (src[j]))
	{
		dest[i + j] = src[j];
		if (i + y >= size)
			break ;
		j++;
	}
	dest[i + j] = '\0';
	if (i + y >= size)
		return (i + y);
	return (i + j);
}

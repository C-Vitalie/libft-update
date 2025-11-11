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

#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	y;
	size_t	j;

	i = 0;
	while (dest[i])
		i++;
	y = 0;
	while (src[y])
		y++;
	if (i + y >= size)
		return (i + y);
	j = 0;
	while ((i + j < size) && (src[j]))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + j);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:45:10 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/11/06 23:57:38 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

size_t	ft_cnt_start(char const *str, char const *set)
{
	int		i;
	int		y;
	int		size;

	i = 0;
	y = 0;
	size = 0;
	while (str[i++])
	{
		if (!((str[i] == set[y]) && (i == y)))
			size++;
		if (i > y )
		if (set[y] != '\0')
			y++;
	}
	while (set[y])
		y++;
	while (i-- > 0)
	{
		if (!(str[i] == set[y]))
			size++;
		if (y > 0)
			y--;
	}
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{

}

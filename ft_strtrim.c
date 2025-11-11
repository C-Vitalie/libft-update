/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:45:10 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/11/10 23:39:15 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

size_t	ft_cnt_start(char const *str, char const *set)
{
	size_t	i;
	size_t	y;

	i = 0;
	while (str[i])
	{
		y = 0;
		while ((set[y]) && (str[i] != set[y]))
			y++;
		if (set[y] == '\0')
			return (i);
		i++;
	}
	return (0);
}

size_t	ft_cnt_end(char const *str, char const *set)
{
	size_t	i;
	size_t	y;

	i = 0;
	while (str[i])
		i++;
	while (i - 1 > 0)
	{
		y = 0;
		while (str[i - 1] != set[y])
			y++;
		if (set[y] == '\0')
			return (i - 1);
		i--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*tab;
	int		i;

	start = ft_cnt_start(s1, set);
	end = ft_cnt_end(s1, set);
	tab = malloc(sizeof(char) * (end - start + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (start < end)
	{
		tab[i] = s1[start];
		start++;
		i++;
	}
	return (tab);
}

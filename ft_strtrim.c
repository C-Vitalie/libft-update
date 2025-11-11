/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:45:10 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/11/11 12:02:26 by vcucuiet         ###   ########.fr       */
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
	while (i > 0)
	{
		y = 0;
		while ((str[i - 1] != set[y]) && (set[y]))
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
	size_t	len;
	char	*tab;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = ft_cnt_start(s1, set);
	end = ft_cnt_end(s1, set);
	if (end < start)
		len = 0;
	else
		len = end - start + 1;
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tab[i] = s1[start + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

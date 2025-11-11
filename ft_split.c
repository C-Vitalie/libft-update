/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:11:13 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/11/11 13:16:26 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cnt_w(const char *str, char c)
{
	int	i;
	int	in_w;
	int	cnt;

	cnt = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			in_w = 0;
		else if (!in_w)
		{
			in_w = 1;
			cnt++;
		}
		i++;
	}
	return (cnt);
}

char	*ft_dup_w(char const *s, int start, int end)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (i < end - start)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	ft_free_all(char **tab, int last)
{
	int	i;

	i = 0;
	while (i < last)
		free(tab[i]);
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**tab;

	tab = malloc(sizeof(char *) * (ft_cnt_w(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while ((s[i] == c) && (s[i]))
			i++;
		start = i;
		while ((s[i] != c) && (s[i]))
			i++;
		if (start < i)
		{
			tab[j] = ft_dup_w(s, start, i);
			if (!tab[j++])
				return (ft_free_all(tab, j - 1), NULL);
		}
	}
	return (tab[j] = NULL,tab);
}

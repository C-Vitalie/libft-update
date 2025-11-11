/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:26:43 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/11/10 23:59:40 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		i;
	int		y;

	tab = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		tab [i] = s1[i];
		i++;
	}
	y = 0;
	while (s2[y])
	{
		tab[i + y] = s2[y];
		y++;
	}
	tab[i + y] = '\0';
	return (tab);
}

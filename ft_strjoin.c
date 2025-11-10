/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:26:43 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/11/06 21:41:48 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		i;
	int		y;

	i = 0;
	y = 0;
	while (s1[i])
		i++;
	while (s2[y])
		y++;
	tab = malloc(sizeof(char) * (i + y));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (s1[i++])
		tab [i] = s1[i];
	y = 0;
	while (s2[y++])
		tab[i + y] = s2[y];
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:19:19 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/11/06 21:19:19 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && (i < len))
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	if (i == len)
		return (0);
	return (s1[i] - s2[i]);
}

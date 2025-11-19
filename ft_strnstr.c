/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:19:21 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/11/06 21:19:21 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *tab, const char *chr, size_t n)
{
	size_t	i;
	size_t	y;
	char	*p1;
	char	*p2;

	if (!*chr)
		return ((char *)tab);
	if (!*tab)
		return ((char *)tab);
	p1 = (char *)tab;
	p2 = (char *)chr;
	i = 0;
	while (i < n)
	{
		y = 0;
		while ((p1[i + y] == p2[y]) && (i + y < n) && (p1[i + y]) && (p2[y]))
			y++;
		if (p2[y] == '\0')
			return (p1 + i);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	printf("%p\n", ft_strnstr(((void*)0), "fake", 0));
	printf("%p", strnstr(((void*)0), "fake", 0));
	return (0);
}

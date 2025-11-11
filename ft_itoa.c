/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:20:11 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/11/11 16:35:34 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len_calc(long int n)
{
	size_t		len;
	long int	div;

	if (n == 0)
		return (1);
	div = 1;
	len = 0;
	while (div < n)
	{
		len++;
		div *= 10;
	}
	return (len);
}

void	ft_convert(char *tab, int sign, size_t len, long int n)
{
	long int	c;
	long int	res;
	size_t		lim;

	res = (long int)n;
	if (sign == 1)
		lim = 0;
	else if (sign == -1)
		lim = 1;
	while (len - 1> lim)
	{
		c = res % 10;
		res = (res - c) / 10;
		tab[len - 1] = (char)c + '0';
		len--;
	}
	c = res % 10;
	res = (res - c) / 10;
	tab[lim] = (char)c + '0';
}

char	*ft_itoa(int n)
{
	char		*tab;
	size_t		len;
	int			sign;
	long int	nb;

	nb = (long int)n;
	len = 0;
	sign = 1;
	if (nb < 0)
	{
		len = 1;
		sign *= -1;
		nb = -nb;
	}
	len += ft_len_calc(nb);
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	ft_convert(tab, sign, len, nb);
	if (sign == -1)
		tab[0] = '-';
	tab[len + 1] = '\0';
	return (tab);
}

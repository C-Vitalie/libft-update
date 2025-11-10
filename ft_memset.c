/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:18:45 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/11/06 21:18:45 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_memset(void *ptr, int val, size_t cnt)
{
	int		*d;
	size_t	i;

	d = (int *)ptr;
	i = 0;
	while(i < cnt)
	{
		d[i] = val;
		i++;
	}
}
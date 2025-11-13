/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:18:48 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/11/06 21:18:48 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	char	chr;;

	chr = (char)c;
	while (*string != '\0')
	{
		if (*string == chr)
			return ((char *)string);
		string++;
	}
	if (*string == chr)
			return ((char *)string);
	return (NULL);
}

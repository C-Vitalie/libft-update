/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_from_stdin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 15:14:51 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/12/31 17:25:31 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**read_from_stdin(char **dest)
{
	char	*str;
	int		i = 0;	

	str = get_next_line(0);
	while (str)
	{
		dest[i] = str;
		str = get_next_line(0);
		i++;
	}
	if (str)
		free(str);
	dest[i] = NULL;
	return (dest);
}
//-------------------------------------------------------------//
/* 	i = 0;
	while (res[i])
	{
		printf("%s", res[i]);          //check what you read
		i++;
	} */
//-------------------------------------------------------------//
	/* i = -1;
	while (res[++i])
	{
		if (res[i])
			free(res[i]);              //free all
	}
	if (res[i])
		free(res[i]); */
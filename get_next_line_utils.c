/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:23:23 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/12/31 17:07:26 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_set_gnl_to_default(t_var_gnl *val, char **stash, int status)
{
	if (status == 0)
	{
		val->t_size = 0;
		val->t_read = 0;
		val->c_buf = 0;
		val->res = NULL;
		val->temp = NULL;
		val->buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!val->buf)
			return ;
		val->buf[BUFFER_SIZE] = '\0';
	}
	if (status == 1)
	{
		if (val->t_read < 0)
		{
			if (*stash)
				free(*stash);
			*stash = NULL;
			if (val->res)
				free(val->res);
			val->res = NULL;
		}
	}
}

char	*ft_strdupcat(char *dest, char *src, ssize_t *size, ssize_t add_size)
{
	char	*temp;
	int		i;
	int		j;

	if (dest)
	{
		temp = dest;
		dest = malloc(sizeof(char) * (*size + add_size + 1));
		if (!dest || !temp)
			return (NULL);
		i = -1;
		while (temp[++i])
			dest[i] = temp[i];
		j = -1;
		while (++j + i < *size + add_size)
			dest[i + j] = src[j];
		dest[i + j] = '\0';
		free(temp);
		temp = NULL;
	}
	else
		dest = ft_strdup(src);
	return (*size += add_size, dest);
}

int	ft_gnl_check_break(t_var_gnl *val, int state)
{
	if (val->buf && state == 1)
	{
		free(val->buf);
		val->buf = NULL;
	}
	if (state == 0)
	{
		if (val->res)
		{
			if (val->res[0] == '\0')
			{
				free(val->res);
				val->res = NULL;
				return (1);
			}
			if (val->res[val->t_size - 1] == '\n')
				return (1);
		}
		if (val->t_read <= 0)
			return (1);
	}
	if (state == -1 && val->t_read < 0 && !val->res)
		val->res = NULL;
	return (0);
}

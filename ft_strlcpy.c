/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:19:13 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/11/06 21:19:13 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;

    i = 0;
    while((i < size) && (src[i]))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(i);
}
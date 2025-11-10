/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:18:37 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/11/06 21:18:37 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memchr(const void *mem, int chr, size_t size)
{
    size_t  i;
    char    *ptr;

    ptr = (char *)mem;
    i = 0;
    while(i < size)
    {
        if(ptr[i] == chr)
            return(ptr + i);
        i++;
    }
    return(NULL);
}
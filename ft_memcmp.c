/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:18:40 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/11/06 21:18:40 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_memcmp(const void *p1, const void *p2, size_t n)
{
    size_t  i;
    char    *ptr1;
    char    *ptr2;

    ptr1 = (char *)p1;
    ptr2 = (char *)p2;
    i = 0;
    while(i < n - 1)
    {
        if(ptr1[i] != ptr2[i])
            return(ptr1[i] - ptr2[i]);
        i++;
    }
    return(ptr1[i] - ptr2[i]);
}
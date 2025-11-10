/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 21:18:57 by vcucuiet          #+#    #+#             */
/*   Updated: 2025/11/06 21:18:57 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(const char *src)
{
    int i;
    char    *tab;

    i = 0;
    while(src[i])
        i++;
    tab = malloc(sizeof(char) * (i + 1));
    if(tab == NULL)
        return(NULL);
    i = 0;
    while(src[i])
    {
        tab[i] = src[i];
        i++;
    }
    tab[i] = '\0';
    return(tab);
}
#include <stdio.h>

int main(void)
{
    char    tab[] = "Salut 42";
    char    *res;

    res = ft_strdup(tab);
    printf("%s", res);
    free(res);
    return(0);
}
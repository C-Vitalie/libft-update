/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcucuiet <vcucuiet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:58:09 by vcucuiet          #+#    #+#             */
/*   Updated: 2026/01/07 11:45:00 by vcucuiet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	partitioning(int *arr, int low, int high)
{
	int	to_swap;
	int	i;
	int	j;

	to_swap = arr[high];
	i = low - 1;
	j = low;
	while (j < high)
	{
		if (arr[j] <= to_swap)
		{
			i++;
			ft_swap(&arr[i], &arr[j]);
		}
		j++;
	}
	ft_swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void	ft_qsort(int *arr, int low, int high)
{
	int	pivot;

	if (low < high)
	{
		pivot = partitioning(arr, low, high);
		ft_qsort(arr, low, pivot - 1);
		ft_qsort(arr, pivot + 1, high);
	}
}
/* void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        ft_printf("%d ", arr[i]);
    }
    ft_printf("\n");
}

int main(void)
{
    // Un tableau de test avec des nombres positifs, négatifs et des doublons
    int data[] = {1, 2, 44, 3};
    int n = sizeof(data) / sizeof(data[0]);

    ft_printf("Tableau d'origine : \n");
    print_array(data, n);

    // Appel de ton algorithme
    // low = 0, high = n - 1 (le dernier index)
    ft_qsort(data, 0, n - 1);

    ft_printf("\nTableau trié : \n");
    print_array(data, n);

    return (0);
}
 */
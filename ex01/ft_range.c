/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:49:19 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/30 19:47:40 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	size;

	if (min >= max)
	{
		tab = NULL;
		return (0);
	}
	size = max - min;
	tab = malloc(sizeof(*tab) * size);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
#include <stdio.h>
int main()
{
    int *tab;
    tab = ft_range(-2147483648, -1000000000);
    printf("%d", tab[0]);
}


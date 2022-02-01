/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:06:57 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/30 13:58:15 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	u;

	i = 0;
	u = 0;
	while (dest[i])
		i++;
	while (src[u])
	{
		dest[i + u] = src[u];
		u++;
	}
	dest[i + u] = 0;
	return (dest);
}

int	ft_counting(char **strs, char *sep)
{
	int	size;
	int	i;
	int	add;

	size = 0;
	i = 0;
	add = 0;
	while (strs[add])
	{
		while (strs[add][i])
		{
			i++;
			size++;
		}
		i = 0;
		while (sep[i])
		{
			i++;
			size++;
		}
	add++;
	}	
	return (size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;
	int		f_size;

	i = 0;
	if (size == 0)
	{
		tab = malloc(sizeof(*tab));
		return (tab);
	}
	f_size = ft_counting(strs, sep);
	tab = malloc(sizeof(*tab) * f_size);
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
			if (i != size - 1)
				ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}

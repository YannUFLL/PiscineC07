/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:05:24 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/29 21:15:40 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copie;
	int		i;

	i = 0;
	while (src[i])
		i++;
	copie = malloc(sizeof(*copie) * i + 1);
	i = 0;
	while (src[i])
	{
		copie[i] = src[i];
		i++;
	}
	copie[i] = '\0';
	return (copie);
}

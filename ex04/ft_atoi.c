/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:38:12 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/30 20:23:00 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	a;
	int	c;
	int	b;

	b = 0;
	a = 0;
	i = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
			i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] = '-')
			a++; 
		i++;
	}
	while (str [i] >= 48 && str[i] <= 57)
	{
		b = b * 10 - (str[i] - 48);
		i++;
	}
	if (a % 2 == 0)
		b = -b;
	return (b);
}

int	ft_check_base(char *base)
{
	int	i;
	int	x;

	i = 0;
	if (base[0] == 0 || base[1] == 0)
		return (0);
	while (base[i])
	{
		x = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[x])
		{
			if (base[x] == base[i])
				return (0);
			x++;
		}
		i++;
	}
	return (1);
}

int	ft_adres(int i, int nbr, int *temp)
{
	int	u;

	u = 0;
	while (nbr > 0 || nbr < 0)
	{
		if (nbr > 0)
			temp[u] = nbr % i;
		if (nbr < 0)
			temp[u] = - (nbr % i);
		nbr = nbr / i;
		u++;
	}
	return (u);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	temp[100];
	int	u;

	i = 0;
	if (ft_check_base(base))
	{
		if (nbr == 0)
			write(1 ,&base[0], 1);
		else
		{
			while (base[i])
				i++;
			if (nbr < 0)
			{
				write(1 ,"-", 1);
				i = -i;
			}
			u = ft_adres(i, nbr, temp);
			while (--u >= 0)
				write(1 ,&base[temp[u]], 1)
		}
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	a;

	if (ft_check_base == 0)
		return (0);
	a = ft_atoi(str);
	ft_putnbr_base(a, base);
	return (a);
}


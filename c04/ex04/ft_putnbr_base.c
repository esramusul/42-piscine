/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emusul <emusul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:43:20 by emusul            #+#    #+#             */
/*   Updated: 2024/08/25 11:43:25 by emusul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	check(char *base)
{
	int	i;
	int	i2;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] < 32 || base[i] > 126)
			return (0);
		else if (base[i] == '-' || base[i] == '+')
			return (0);
		i2 = i + 1;
		while (base[i2] != '\0')
		{
			if (base[i] == base[i2] && i != i2)
				return (0);
			i2++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		result[32];	
	int		i;
	long	nb;

	if (check(base) == 0)
		return ;
	nb = nbr;
	i = 0;
	len = ft_strlen(base);
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	while (nb != 0)
	{
		result[i] = nb % len;
		nb = nb / len;
		i++;
	}
	while (--i >= 0)
	{
		write(1, &base[result[i]], 1);
	}
}

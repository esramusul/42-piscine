/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emusul <emusul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:10:11 by emusul            #+#    #+#             */
/*   Updated: 2024/08/25 15:10:14 by emusul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	a;

	i = 2;
	a = nb;
	if (nb == 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	if (a > 2)
	{
		while (i * i <= a)
		{
			if (i * i == a)
				return (i);
			i++;
		}
	}
	return (0);
}
#include<stdio.h>
int main()
{
	int nb=169;
	printf("%d",ft_sqrt(nb));
}


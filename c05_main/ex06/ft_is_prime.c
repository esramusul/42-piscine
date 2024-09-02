/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emusul <emusul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:24:34 by emusul            #+#    #+#             */
/*   Updated: 2024/08/25 15:24:37 by emusul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	a;
	int	i;

	a = nb;
	i = 1;
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= a)
	{
		if (a % i == 0)
			if (i != 1 && i != a)
				return (0);
		i++;
	}
	return (1);
}
#include<stdio.h>
int main()
{
	int nb=-4;
	printf("%d",ft_is_prime(nb));
}


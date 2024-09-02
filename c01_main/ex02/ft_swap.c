/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emusul <emusul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:46:32 by emusul            #+#    #+#             */
/*   Updated: 2024/08/17 17:46:32 by emusul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int	x;
	int	y;

	x = 2;
	y = 3;
	printf("x= %d \n", x);
	printf("y= %d \n", y);
	ft_swap(&x, &y);
	printf("x= %d \n", x);
	printf("y= %d \n", y);
	return (0);
}

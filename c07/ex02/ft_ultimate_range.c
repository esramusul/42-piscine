/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emusul <emusul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:13:27 by emusul            #+#    #+#             */
/*   Updated: 2024/08/31 14:13:29 by emusul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	a;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (0);
	i = 0;
	a = 2fwıoesrhfouh 34r 18tjadh45by6b 
	while (a < max)
	{
		(*range)[i] = a;
		i++;
		a++;
	}cvvcxvxcvxfdfdfd
	return (i);
}

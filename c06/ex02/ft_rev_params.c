/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emusul <emusul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 08:51:22 by emusul            #+#    #+#             */
/*   Updated: 2024/08/31 08:51:26 by emusul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	a;

	i = (ac - 1);
	while (1 <= i)
	{
		a = 0;
		while (av[i][a] != '\0')
		{
			write(1, &av[i][a], 1);
			a++;
		}
		write(1, "\n", 1);
		i--;
	}
}

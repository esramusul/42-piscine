/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emusul <emusul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 08:51:57 by emusul            #+#    #+#             */
/*   Updated: 2024/08/31 08:52:00 by emusul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int ac, char **av)
{
	int		a;
	int		i;

	i = 1;
	while (i < ac - 1)
	{
		a = 1;
		while (a < ac - 1)
		{
			if (ft_strcmp(av[a], av[a + 1]) > 0)
			{
				ft_swap(&av[a], &av[a + 1]);
			}
			a++;
		}
		i++;
	}
	a = 1;
	while (a < ac)
	{
		ft_putstr(av[a]);
		ft_putchar('\n');
		a++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emusul <emusul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:53:38 by emusul            #+#    #+#             */
/*   Updated: 2024/08/18 19:10:06 by yusudemi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print(int j, int i, int x, int y)
{
	if (i == 0 && j == 0)
		ft_putchar('o');
	else if (i == 0 && j == x - 1)
		ft_putchar('o');
	else if (i == y - 1 && j == 0)
		ft_putchar('o');
	else if (i == y - 1 && j == x - 1)
		ft_putchar('o');
	else if (i == 0 || i == y - 1)
		ft_putchar('-');
	else if (j == 0 || j == x - 1)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	print_error(void)
{
	char	*error;
	int		e;

	error = "Hatalı Girdi!\n";
	e = 0;
	while (error[e] != '\0')
	{
		write (1, &error[e], 1);
		e++;
	}
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	if (x <= 0 || y <= 0)
	{
		print_error();
		return ;
	}
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			print(j, i, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

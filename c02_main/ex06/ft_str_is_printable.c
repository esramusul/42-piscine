/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emusul <emusul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:54:34 by emusul            #+#    #+#             */
/*   Updated: 2024/08/19 17:54:38 by emusul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] <= 126 && str[i] >=  32 )
			i++;
		else
			return (0);
	}
	return (1);
}
#include <stdio.h>
int main()
{
	char	str[]="esra\0";

	printf("%d",ft_str_is_printable(str));
}

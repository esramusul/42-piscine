/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emusul <emusul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:20:59 by emusul            #+#    #+#             */
/*   Updated: 2024/08/19 17:21:04 by emusul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] <= '9' && str[i] >= '0')
			i++;
		else
			return (0);
	}
	return (1);
}
#include <stdio.h>
int main()
{
	char	str[]="esra";
	printf("%d",ft_str_is_numeric(str));
}

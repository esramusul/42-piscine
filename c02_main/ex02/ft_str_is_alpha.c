/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emusul <emusul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:01:16 by emusul            #+#    #+#             */
/*   Updated: 2024/08/19 17:01:20 by emusul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] <= 'z' && str[i] >= 'a' )
			|| (str[i] <= 'Z' && str[i] >= 'A'))
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
	printf("%d",ft_str_is_alpha(str));
}

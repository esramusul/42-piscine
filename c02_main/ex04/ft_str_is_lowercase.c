/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emusul <emusul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:34:05 by emusul            #+#    #+#             */
/*   Updated: 2024/08/19 17:34:08 by emusul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a' )
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

	printf("%d", ft_str_is_lowercase(str));
}

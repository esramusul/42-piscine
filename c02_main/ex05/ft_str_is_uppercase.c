/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emusul <emusul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:41:11 by emusul            #+#    #+#             */
/*   Updated: 2024/08/19 17:41:14 by emusul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A' )
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
    
	printf("%d",ft_str_is_uppercase(str));
}

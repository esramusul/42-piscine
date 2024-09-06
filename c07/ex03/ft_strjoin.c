/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emusul <emusul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 08:38:43 by emusul            #+#    #+#             */
/*   Updated: 2024/09/02 08:38:47 by emusul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		k;
	int		l;

	str = (char *)malloc(ft_strlen(*strs) + ft_strlen(sep) + 1);
	i = 0;
	k = 0;
	while (i < size)
	{
		l = 0;
		while (strs[i][l] != '\0')
		{
			str[k++] = strs[i][l++];
		}
		l = 0;
		while (sep[l] != '\0' && i != size - 1)
		{
			str[k++] = sep[l++];
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}

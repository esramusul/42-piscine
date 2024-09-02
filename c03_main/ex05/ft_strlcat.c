/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emusul <emusul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 10:35:57 by emusul            #+#    #+#             */
/*   Updated: 2024/08/24 10:36:02 by emusul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;
	unsigned int	destlen;

	srclen = ft_strlen(src);
	destlen = 0;
	while (dest[destlen])
		destlen++;
	if (size == 0 || size <= destlen)
		return (srclen + size);
	i = 0;
	while (src[i] && destlen + i < (size - 1))
	{
		dest[i + destlen] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
#include<stdio.h>
int main()
{
	char dest[]="esra";
	char src[]="musul";
	printf("%d",ft_strlcat(dest,src,7));
}

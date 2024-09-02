/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emusul <emusul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 08:27:40 by emusul            #+#    #+#             */
/*   Updated: 2024/08/24 08:28:03 by emusul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		if (s1[i] != s2[i] || i >= n -1)
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
#include<stdio.h>
int main()
{
	char s1[]="esra";
	char s2[]="emre";
	printf("%d",ft_strncmp(s1,s2,2));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emusul <emusul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 09:46:30 by emusul            #+#    #+#             */
/*   Updated: 2024/08/24 09:46:34 by emusul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (to_find[a] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + a] == to_find[a] && str[i + a] != '\0')
			a++;
		if (to_find[a] == '\0')
			return (&str[i]);
		i++;
		a = 0;
	}
	return (0);
}

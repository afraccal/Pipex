/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afraccal <afraccal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:43:14 by afraccal          #+#    #+#             */
/*   Updated: 2023/01/23 10:18:00 by afraccal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *str1, const void *str2, size_t num)
{
	size_t		i;
	const char	*s1;
	const char	*s2;

	i = 0;
	s1 = str1;
	s2 = str2;
	if (num == 0)
	{
		return (0);
	}
	while (i < num)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		}
		i++;
	}
	return (0);
}

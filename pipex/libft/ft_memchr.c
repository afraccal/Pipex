/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afraccal <afraccal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:09:45 by afraccal          #+#    #+#             */
/*   Updated: 2023/01/23 10:18:14 by afraccal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	a;

	i = 0;
	s = (unsigned char *)str;
	a = c;
	while (i < n)
	{
		if (s[i] == a)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}

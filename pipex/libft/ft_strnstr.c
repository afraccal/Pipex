/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afraccal <afraccal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:54:25 by afraccal          #+#    #+#             */
/*   Updated: 2023/01/23 11:05:17 by afraccal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	b = 0;
	if (len == 0 && big == NULL)
		return (0);
	if (little[0] == '\0' || little == 0)
		return ((char *)big);
	while (big[b] != '\0' && b < len)
	{
		l = 0;
		while (big[l + b] == little[l] && (l + b) < len)
		{
			if (big[l + b] == '\0' && little[l] == '\0')
			{
				return ((char *)&big[b]);
			}
			l++;
		}
		if (little[l] == '\0')
			return ((char *)big + b);
		b++;
	}
	return (0);
}

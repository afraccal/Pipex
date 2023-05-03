/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afraccal <afraccal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:30:39 by afraccal          #+#    #+#             */
/*   Updated: 2023/01/18 16:53:37 by afraccal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str);
	while (i < size + 1)
	{
		if (str[i] == (char)c)
		{
			return ((char *)(str + i));
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return (0);
}

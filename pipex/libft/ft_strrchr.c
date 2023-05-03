/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afraccal <afraccal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:56:44 by afraccal          #+#    #+#             */
/*   Updated: 2023/01/18 16:58:11 by afraccal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	size;

	size = ft_strlen(str);
	while (size + 1 > 0)
	{
		if (str[size] == (char)c)
		{
			return ((char *)(str + size));
		}
		size--;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return (0);
}

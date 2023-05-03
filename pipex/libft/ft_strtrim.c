/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afraccal <afraccal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:16:30 by afraccal          #+#    #+#             */
/*   Updated: 2023/01/19 17:54:43 by afraccal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_string(char c, char const *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*buffer;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j] && is_in_string(s1[j], set) == 1)
		j++;
	k = ft_strlen((char *) s1);
	while (k > j && is_in_string(s1[k - 1], set) == 1)
		k--;
	buffer = (char *) malloc(sizeof(*s1) * (k - j + 1));
	if (!buffer)
		return (NULL);
	i = 0;
	while (j < k)
		buffer[i++] = s1[j++];
	buffer[i] = 0;
	return ((char *)buffer);
}

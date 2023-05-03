/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afraccal <afraccal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:29:27 by afraccal          #+#    #+#             */
/*   Updated: 2023/01/18 17:57:54 by afraccal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include  "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	size_t	j;

	i = 0;
	j = 0;
	if (s == '\0')
		return (0);
	if ((size_t) start >= ft_strlen(s))
		return (ft_strdup(""));
	if ((size_t) len > ft_strlen(s))
		len = ft_strlen(s);
	sub = (char *) malloc (sizeof(*s) * (len + 1));
	if (sub == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			sub[j++] = s[i];
		}
		i++;
	}
	sub[j] = 0;
	return (sub);
}

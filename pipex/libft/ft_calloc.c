/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afraccal <afraccal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:06:37 by afraccal          #+#    #+#             */
/*   Updated: 2023/01/23 12:43:11 by afraccal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t dim)
{
	char	*a;

	a = malloc (num * dim);
	if (a == '\0' || (num == SIZE_MAX && dim == SIZE_MAX))
	{
		return (0);
	}
	ft_bzero(a, num * dim);
	return (a);
}

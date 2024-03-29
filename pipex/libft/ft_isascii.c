/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afraccal <afraccal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:53:57 by afraccal          #+#    #+#             */
/*   Updated: 2023/01/16 15:13:23 by afraccal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	int	n;

	n = 1;
	if (c >= 0 && c <= 127)
	{
		return (n);
	}
	else
	{
		n = 0;
	}
	return (n);
}

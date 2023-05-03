/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afraccal <afraccal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:49:12 by afraccal          #+#    #+#             */
/*   Updated: 2023/01/23 11:35:15 by afraccal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (lst != '\0' && *lst != '\0')
	{
		curr = *lst;
		while (curr->next)
		{
			curr = curr->next;
		}
		curr->next = new;
	}
	else
		*lst = new;
}

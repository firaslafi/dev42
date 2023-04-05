/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:38:43 by flafi             #+#    #+#             */
/*   Updated: 2023/04/05 18:54:27 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!*lst)
    {
        *lst = new;
    }
    else
    {
        new->next = *lst;
        *lst = new ;
        
    }
}

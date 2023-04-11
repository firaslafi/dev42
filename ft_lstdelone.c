/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:53:23 by flafi             #+#    #+#             */
/*   Updated: 2023/04/11 22:35:14 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    t_list *tmp;
    
    tmp = lst;
    if(lst == NULL)
        return;
    if(lst->next == NULL)
        del((void *) (lst->content));
        free(lst);
}

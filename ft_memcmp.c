/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:01:19 by flafi             #+#    #+#             */
/*   Updated: 2023/03/21 19:12:05 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    //unsigned char *chr1;
    //unsigned char *chr2;
    int i;
  
    i = 0;
    while(n--)
    {
    //  chr1 = (unsigned char*)s1;
    // chr2 = (unsigned char*)s2;
        if(((unsigned char *) s1)[i] == ((unsigned char *) s2)[i])
        {
          i++;
        }
        else
          return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
    }
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:44:27 by flafi             #+#    #+#             */
/*   Updated: 2023/04/01 05:36:06 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
  size_t i;
  char *chr;
  
  chr = NULL;
  i = 0;
  if(src == NULL && dest == NULL)
    return(dest);
  while(((char *)src)[i])
    {
      *chr = ((char *)src)[i];
      i++;
      chr++;
    }

  i = 0;
  while(n--)
    {
      ((char *)dest)[i] = chr[i];
      i++;
    }
  return (dest);
}
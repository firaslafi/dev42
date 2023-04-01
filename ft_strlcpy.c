/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 22:16:16 by flafi             #+#    #+#             */
/*   Updated: 2023/04/01 06:00:54 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
  size_t i;
  char *chr;

  chr = dest;
  i = 0;
  if(src == NULL && dest == NULL)
    return(dest);
  while(i < n)
    {
      chr[i] = ((char *)src)[i];
      i++;
    }
  i = 0;
    while(n--)
    {
      ((char *)dest)[i] = chr[i];
      i++;
    }

  return (dest);
}

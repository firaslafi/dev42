/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:44:27 by flafi             #+#    #+#             */
/*   Updated: 2023/03/31 04:25:05 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *ft_memmove(void *dest, const void *src, size_t n)
{
  size_t lensrc;
  unsigned char *tmp;
  unsigned char *srctmp;
  
  lensrc = ft_strlen(src);
  srctmp = NULL;
  tmp = NULL;
  ft_memcpy((void *)srctmp, src, lensrc);
  
  if(n < lensrc)
    return (dest);
  
  ft_memcpy((void *)tmp, src, n);
  while(n--)
    {
      *tmp = *srctmp;
      tmp++;
      srctmp++;
    }
  
  
  return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:44:27 by flafi             #+#    #+#             */
/*   Updated: 2023/04/01 02:03:49 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *ft_memmove(void *dest, const void *src, size_t n)
{
  size_t lensrc;
  char *dsttmp;
  char *srctmp;
  size_t i;

  if(src == NULL && dest == NULL)
    return(dest);
  i = 0;
  lensrc = ft_strlen(src);

  dsttmp = calloc(lensrc, 1);
  srctmp = calloc(lensrc, 1);

  //copy the src to srctmp
  while(lensrc--)
    {
      *srctmp = ((char *)src)[i];
      srctmp++;
      i++;
    }
// moving from srctm to dest
  while(n--)
    {
      *dsttmp = *srctmp;
      srctmp++;
      dsttmp++;
    }
  
  return (dest);
}
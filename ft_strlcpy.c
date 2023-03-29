/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 22:16:16 by flafi             #+#    #+#             */
/*   Updated: 2023/03/29 04:23:02 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
  size_t i;
  size_t j;
  size_t init_dstsize;
  
  init_dstsize = ft_strlen(dst);
  i = 0;
  j = 0;
  if(dstsize == 0)
    return(ft_strlen(src));
  while(src[i] != '\0' && j < (dstsize - 1))
    {
      dst[j] = src[i];
      j++;
      i++;
    }
  if(i < dstsize)
    dst[j] = '\0';
  return (ft_strlen(src));
}

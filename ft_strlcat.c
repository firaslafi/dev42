/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:14:18 by flafi             #+#    #+#             */
/*   Updated: 2023/03/29 01:13:01 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
  int i;
  int j;
  int init_dstsize;
  
  init_dstsize = ft_strlen(dst);
  i = 0;
  j = init_dstsize;

  while(src[i] != '\0' && j < init_dstsize - 1)
    {
      dst[j] = src[i];
      j++;
      i++;
    }
  if(i < (int)dstsize)
    *dst = '\0';
  if (init_dstsize < (int)dstsize)
      return (init_dstsize + ft_strlen(src));
  else
      return(dstsize + ft_strlen(src));
}
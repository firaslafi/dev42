/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 03:33:18 by flafi             #+#    #+#             */
/*   Updated: 2023/04/05 16:22:34 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
  size_t i;
  size_t j;
  size_t needlength;
  size_t found;
  char *result;
  i = 0;
  j = 0;
  found = 0;
  needlength = ft_strlen(needle);
  if(ft_strlen(needle) == 0)
    return ((char *)haystack);
  if(len <= 0 || len < needlength)
    return (NULL);
  while(i < len)
  {
    if(haystack[i] != needle[j])
      i++;
    else
    {
      j = 0;
      while(haystack[i] == needle[j])
        {
          if(j == needlength - 1)
          {
            found = 1;
            result = (char *)&haystack[i-j];
            break;
          }
          i++;
          j++;
        }
        if (found)
         break;
    }
  }
  if (!found)
    return(NULL);
  else
    return(result);
}

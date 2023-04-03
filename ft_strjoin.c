/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 04:54:03 by flafi             #+#    #+#             */
/*   Updated: 2023/04/03 02:41:51 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
  char *result;
  size_t lens1;
  size_t lens2;
  size_t i;
  size_t l1;
  size_t l2;
  
  lens1 = ft_strlen(s1);
  lens2 = ft_strlen(s2);
  i = 0;
  l1 = lens1;
  l2 = lens2;
  result = malloc(lens1 + lens2 + 1);
  if (!result)
    return(NULL);
  if (!s1 && !s2)
    return(ft_strdup(""));
  
  while(l1--)
    {
      result[i] = s1[i];
      i++;
    }
  i = 0;
  while(l2--)
    {
    result[lens1 + i] = s2[i];
    i++;
    }
  result[lens1 + lens2] = '\0';
  return(result);
}

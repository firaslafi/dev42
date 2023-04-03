/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 03:10:59 by flafi             #+#    #+#             */
/*   Updated: 2023/04/03 07:26:44 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_start(char const *s1, char const *set)
{
  size_t i;
  i = 0;
  while (s1[i])
    {
    if(!ft_strchr(set, s1[i]))
      return (i);
    i++;
    }
  return (i);
}

size_t ft_end(char const *s1, char const *set)
{
  size_t i;
  i = ft_strlen(s1) - 1;
  while (s1[i])
    {
    if(!ft_strchr(set, s1[i]))
      return (i);
    i--;
    }
  return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
  char *result;
  size_t lens1;
  size_t startpos;
  size_t endpos;
  size_t i;
  i = 0;
  lens1 = ft_strlen(s1);
  startpos = ft_start(s1, set);
  endpos = ft_end(s1, set);
  result = malloc(((endpos - startpos) + 2));
  if (!result)
    return(NULL);
  while(i <= endpos)
    {
      result[i++] = s1[startpos++];
    }
  result[i] = '\0'; 
  return (result);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:26:52 by flafi             #+#    #+#             */
/*   Updated: 2023/04/10 23:00:31 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
size_t word_count(char const *s, char c)
{
  size_t i;
  size_t wc;
  
  i = 0;
  wc = 0;
  if (s[0] == '\0')
    return (0);
  if (s[i] != c) {
    wc++;
  }
  while (s[i])
  {
    if (s[i] == c)
    {
      while (s[i] == c) {
        i++;
      }
      if (s[i] == '\0') {
        break;
      }
      wc++;
    }
    i++;
  }
  return wc;
}

size_t word_len(const char *s, size_t i, char c)
{
  size_t len = 0;

  while (s[i] == c) {
    i++;
  }
  while (s[i] != c && s[i] != '\0') {
    len++;
    i++;
  }
  return (len);
}



char **ft_split(char const *s, char c) {
  char *chr;
  int i, j, index;
  char **ptr;
  size_t wl;
  size_t wc;

  if (!s)
    return (NULL);

  wc = word_count(s, c);
  ptr = (char **)malloc((wc + 1) * sizeof(char *));
  if (ptr == NULL)
    return (NULL);
  if (wc == 0)
  {
    ptr[0] = NULL;
    return (ptr);
  }
  i = 0;
  j = 0;
  index = 0;
  while (wc--) {
    wl = word_len(s, i, c);
    chr = (char *)malloc((wl + 1) * sizeof(char));
    if (chr == NULL) {
      while (index) {
        free(ptr[index]);
        index--;
      }
      return (NULL);
    }
    while (s[i] == c)
      i++;
    strncpy(chr, &s[i], wl);
    chr[wl] = '\0';
    i += wl;
    ptr[index] = chr;
    index++;
  }
    ptr[index] = NULL;
  return (ptr);
}

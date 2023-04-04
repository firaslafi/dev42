/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 03:10:19 by flafi             #+#    #+#             */
/*   Updated: 2023/04/04 08:21:14 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_nalloc(int n)
{
  int i;

  if(n < 0)
    n = -n;
  i = 0;
  while( n > 9 )
  {
    n = n / 10;
    i++;
  }
  return (i+1);
}

char *ft_reverse(char *s, int num)
{
  size_t i;
  size_t len;
  char tmp[10];
  len = num;
  i = 0;

  while(len-- > 0)
    {
      tmp[i] = s[len];
      i++;
    }
  i = 0;
  while(num--)
    {
      s[i] = tmp[i];
      i++;
    }
  return (s);
}


char *ft_itoa(int n)
{
  int sign;
  int i;
  char *s;
  int num;
  
  i = 0;
  sign = 1;
  if(n == -2147483648)
    return(ft_strdup("-2147483648"));
  if(n == -0)
    return(ft_strdup("0"));
  num = ft_nalloc(n);
  
  if(n <= 0)
  {
    sign *= -1;
    n *= sign;
  }
  if(sign > 0)
    s = malloc(num+1);
  else
    s = malloc(num+2);
  if(!s)
    return(NULL);
  
  while( n > 0 )
    {
      s[i] = n % 10 + '0';
      n = n / 10;
      i++;
    }
  s = ft_reverse(s, num);
  s[i] = '\0';
  if(sign == -1)
    return(ft_strjoin("-",s));
  return(s);
}
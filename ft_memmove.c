/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:44:27 by flafi             #+#    #+#             */
/*   Updated: 2023/04/02 02:42:52 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

// void    *ft_memmove(void *dest, const void *src, size_t n)
// {
//   char *chrd;
//   char *chrs;

//   if(src == NULL && dest == NULL)
//     return(dest);
  
//   chrd = (char *)dest;
//   chrs = (char *)src;

// // printf("test\n");
//   if (dest > src) 
//   {
//     while(n > 0)
//     {
//       chrd[n] = chrs[n];
//       n--;
//     }
//   }
//   else
//     {
//       while(n > 0)
//       { 
//         n--;
//         *chrd++ = *chrs++;
//         //  printf("case 2  > %s  |  %s\n",dest, src);
//         //*chrd = *chrs;
//         //chrd++;
//         //chrs++;
//       }
//     }


//   return (dest);
// }

void    *ft_memmove(void *dest, const void *src, size_t n)
{
  char *d;
  char *s;

  d = (char *)dest;
  s = (char *)src;
  if ((dest == src) || !n)
    return(d);
  if (src > dest)
    d = ft_memcpy(dest, src, n);
  else
    while(n-- > 0)
      d[n] = s[n];
  return (d);
}


// int main()
// {

// 	char	*dest;
//   char	src[] = "lorem ipsum dolor sit amet";
//   printf("%s\n",ft_memmove(dest, src, 8));
//   return 0;
// }
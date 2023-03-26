/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:34:20 by flafi             #+#    #+#             */
/*   Updated: 2023/03/25 00:55:39 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    void *ptr;
    unsigned char chr;
    int i;
  
    i = 0;
    ptr = NULL;
    while(n--)
    {
      chr = ((unsigned char *) s)[i];
        if(chr == (unsigned char) c)
        {
            return((void *)s);
        }
        else
        {
          i++;
          s++;
        }
    }
    return (ptr);
}

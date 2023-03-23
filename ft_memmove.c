/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:44:27 by flafi             #+#    #+#             */
/*   Updated: 2023/03/17 16:38:29 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void    *ft_memmove(void *dest, const void *src, int n)
{
    char    *tmp;
    while(n)
    {
        tmp = (char *) src;
        write(1, tmp, 1);
        printf("\n");
        
       (char *) dest =  tmp;
      
        dest++;
        src++;
        n--;
    }
    return (NULL);
}

int main(void)
{
    char *s = "nico";
    char *d = "xxxxx";
    ft_memmove(d, s, 4);
    write(1, d, 5);
}

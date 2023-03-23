/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:48:18 by flafi             #+#    #+#             */
/*   Updated: 2023/03/19 20:56:01 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int ft_strlen(const char *s)
{
    int counter;

    counter = 0;
    while(*s)
    {
        s++;
        counter++;  
        
    }
    return (counter);
}

char *ft_strrchr(const char *s, int c)
{
    int len;
    int found;
    char *ptr;
    
    len = ft_strlen(s);
    found = 0;
    ptr = NULL;
    while(len && !found)
    {
        if(s[len] == c)
        {
            ptr = (char *) &s;
            return (ptr);
        }
        else
        len--;
    }
    return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 22:16:16 by flafi             #+#    #+#             */
/*   Updated: 2023/03/25 22:56:55 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcpy(char * dst, const char * src, size_t dstsize)
{
    int dstlen;
    
    dstlen = dstsize;
    while(dstlen > 1)
    {
        *dst = *src;
        dst++;
        src++;
        dstlen--;
    }

}
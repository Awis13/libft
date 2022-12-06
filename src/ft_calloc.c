/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 10:55:49 by Nipostni          #+#    #+#             */
/*   Updated: 2022/12/06 20:37:44 by nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    ptr = malloc(count * size);
    if (ptr == NULL)
        return NULL;

    if (ft_memset(ptr, 0, count * size) == NULL)
    {
        free(ptr);
        return NULL;
    }
    return ptr;
}


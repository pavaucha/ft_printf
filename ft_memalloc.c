/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memlloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavaucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 17:10:37 by pavaucha          #+#    #+#             */
/*   Updated: 2017/12/04 13:33:38 by pavaucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void		*str;
	size_t		i;

	i = 0;
	if ((str = (void*)malloc(sizeof(void) * size)) == 0)
		return (0);
	while (i < size)
	{
		*(char*)(str + i) = '\0';
		i++;
	}
	return (str);
}

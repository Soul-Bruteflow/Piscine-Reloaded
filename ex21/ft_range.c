/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruteflow <bruteflow@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 16:15:17 by bruteflow         #+#    #+#             */
/*   Updated: 2019/03/31 16:15:39 by bruteflow        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tmp;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	tmp = malloc(sizeof(int) * (max - min));
	while (min <= max - 1)
	{
		tmp[i] = min;
		i++;
		min++;
	}
	return (tmp);
}
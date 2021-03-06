/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 14:34:39 by bruteflow         #+#    #+#             */
/*   Updated: 2019/04/09 10:47:08 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

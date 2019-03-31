/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruteflow <bruteflow@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 15:11:56 by bruteflow         #+#    #+#             */
/*   Updated: 2019/03/31 15:15:17 by bruteflow        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, const char *s2)
{
	unsigned long	i;
	int				reslt;
	char			*st_1;
	char			*st_2;

	i = 0;
	st_1 = (char*)s1;
	st_2 = (char*)s2;
	while (st_1[i] != '\0' && st_1[i] == st_2[i])
		i++;
	reslt = st_1[i] - st_2[i];
	return (reslt);
}
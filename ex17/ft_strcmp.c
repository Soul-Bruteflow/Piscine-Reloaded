/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 15:11:56 by bruteflow         #+#    #+#             */
/*   Updated: 2019/04/09 10:47:41 by mvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
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

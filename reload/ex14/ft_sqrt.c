/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:56:17 by yourlogin         #+#    #+#             */
/*   Updated: 2024/09/30 15:44:39 by yourintrana      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i < nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	if (nb == 1)
		return (1);
	return (0);
}

/*in	main(void)
{
	int	nb;
	int	res;

	nb = 81;
	res = ft_sqrt(nb);
	printf("%i\n", res);
	return (1);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourintraname <yourintraname@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:07:51 by yourlogin         #+#    #+#             */
/*   Updated: 2024/09/28 13:00:18 by yourintrana      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	a;
	int	res;

	a = 1;
	res = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (a <= nb)
	{
		res = res * a;
		a++;
	}
	return (res);
}

/*int main(void)
{
	int nb;
	int result;

	nb = 5;
	result = ft_iterative_factorial(nb);
	printf("Result is: %i\n", result);
	return (1);
}*/

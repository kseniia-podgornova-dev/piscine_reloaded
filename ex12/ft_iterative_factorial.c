/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:37:02 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/10/22 20:48:48 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}

// 
// #include <stdio.h>

// int main(void)
// {
// 	printf("number is: %d\n", ft_iterative_factorial(5));
// }
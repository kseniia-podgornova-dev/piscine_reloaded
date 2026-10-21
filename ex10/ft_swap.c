/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:15:50 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/10/21 15:18:59 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	if (!a || !b)
		return ;
	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int x = 7;
// 	int	y = 3;
// 	int *a = &x;
// 	int *b = &y;

// 	ft_swap(a, b);
// 	printf("x = %d\n", x);
// 	printf("y = %d\n", y);
// }
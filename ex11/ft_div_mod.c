/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:19:38 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/10/21 15:32:32 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	cakes = 7;
// 	int	people = 3;
// 	int	div_result;
// 	int	mod_result;

// 	ft_div_mod(cakes, people, &div_result, &mod_result);
// 	printf("cakes per person: %d\n", div_result);
// 	printf("rest: %d\n", mod_result);
// }
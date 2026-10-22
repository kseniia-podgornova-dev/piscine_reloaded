/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpodgorn <kpodgorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:20:14 by kpodgorn          #+#    #+#             */
/*   Updated: 2026/10/22 13:16:05 by kpodgorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	result_len;
	int	*result;
	int	i;

	if (min >= max)
		return (NULL);
	result_len = max - min;
	result = (int *)malloc(sizeof(int) * result_len);
	i = 0;
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}

// #include <stdio.h>

// int main(void)
// {
// 	int	valor_min = 0;
// 	int	valor_max = 3;
// 	int *resultado;
// 	int	i = 0;

// 	resultado = ft_range(valor_min, valor_max);
// 	if (!resultado)
// 	{
// 		printf("Error: Pointer is NULL.\n");
// 		return (1);
// 	}
// 	while (i < (valor_max - valor_min))
// 	{
// 		printf("%i\n", resultado[i]);
// 		i++;
// 	}
// 	free(resultado);
// 	return (0);
// }
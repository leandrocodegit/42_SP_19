/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:49:09 by loliveir          #+#    #+#             */
/*   Updated: 2019/12/03 11:52:49 by loliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int valor_de_a;
	int valor_de_b;

	valor_de_a = *a;
	valor_de_b = *b;
	*a = valor_de_a / valor_de_b;
	*b = valor_de_a % valor_de_b;
}

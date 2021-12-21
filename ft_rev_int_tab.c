/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 13:56:06 by loliveir          #+#    #+#             */
/*   Updated: 2019/12/04 14:01:05 by loliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int indice;
	int valor_do_menor;
	int valor_do_maior;

	indice = 0;
	size--;
	while (size > indice)
	{
		valor_do_menor = tab[indice];
		valor_do_maior = tab[size];
		tab[size] = valor_do_menor;
		tab[indice] = valor_do_maior;
		size--;
		indice++;
	}
}

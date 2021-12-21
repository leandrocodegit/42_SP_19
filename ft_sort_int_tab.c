/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loliveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 13:49:02 by loliveir          #+#    #+#             */
/*   Updated: 2019/12/04 13:53:50 by loliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int indice;
	int posicao;
	int valor;
	int armazena_valor;

	indice = 0;
	posicao = 0;
	while (posicao < size)
	{
		valor = tab[posicao];
		indice = posicao + 1;
		while (indice < size)
		{
			if (tab[indice] < valor)
			{
				armazena_valor = tab[indice];
				tab[posicao] = armazena_valor;
				tab[indice] = valor;
				valor = armazena_valor;
			}
			indice++;
		}
		posicao++;
	}
	size--;
}

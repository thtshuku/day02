/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtshuku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:14:51 by thtshuku          #+#    #+#             */
/*   Updated: 2020/07/09 15:10:21 by thtshuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_reverse_alphabet(void)
{	
	
	int l;
	l='z';

	while (l >= 'a')
	{
		ft_putchar(l);
		l--;
	}
}

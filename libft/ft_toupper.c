/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukeles <mukeles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:52:38 by mukeles           #+#    #+#             */
/*   Updated: 2022/02/15 10:52:38 by mukeles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int str)

{
	if (str >= 'a' && str <= 'z')
		str -= 32;
	return (str);
}

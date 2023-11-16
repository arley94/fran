/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeos_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantill <fsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:15:45 by fsantill          #+#    #+#             */
/*   Updated: 2023/11/16 14:43:25 by fsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#define RESET_COLOR "\x1b[0m"
#define YELLOW_COLOR "\x1b[33m"
#define GREEN_COLOR "\x1b[32m"
#define RED_COLOR "\x1b[31m"

int	test_format_c(void)
{
	char	aux;

	aux = 'F';
	if (ft_printf("Char: %c ", aux) == printf("Char: %c ", aux))
		return (1);
	else
		return (0);
}

int	test_format_s(void)
{
	char	*auxstr;

	auxstr = "Hola!!";
	printf("\n");
	if (ft_printf("String: %s ", auxstr) == printf("String: %s ", auxstr))
		return (1);
	else
		return (0);
}

/*int	test_format_p(void)
{
	void	*auxptr;

	auxptr = NULL;
	printf("\n");
	if (ft_printf("Void Pointer: %p ", auxptr) \
	== printf("Void Pointer: %p ", auxptr))
		return (1);
	else
		return (0);
}*/

int	test_format_d_and_i(void)
{
	int	auxnbr;
	int	auxnbr2;

	auxnbr = -123418351;
	auxnbr2 = 4938;
	printf("\n");
	if (ft_printf("Decimal: %d and Integer: %i ", auxnbr, auxnbr2) \
	== printf("Decimal: %d and Integer: %i ", auxnbr, auxnbr2))
		return (1);
	else
		return (0);
}

int	test_format_u(void)
{
	int	auxnbrneg;
	int	auxnbrpos;

	auxnbrneg = -12;
	auxnbrpos = 12;
	printf("\n");
	if (ft_printf("Neg!!: %u and Pos: %u ", auxnbrneg, auxnbrpos) \
	== printf("Neg!!: %u and Pos: %u ", auxnbrneg, auxnbrpos))
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf(YELLOW_COLOR "\n╔╗ FRANCRYPTO® 💡🔗💻\n╠╗  Tester by fsantill\n═╝\n \
	● Comparing my FT_PRINTF vs PRINTF ●\n" RESET_COLOR "\n");
	if (test_format_c() == 1)
		printf(GREEN_COLOR "\n\n<< Format 'c' = OKey! ✅ >>\n" RESET_COLOR);
	else
		printf(RED_COLOR "\n\n<< Format 'c' = KnOckout! ❌ >>\n" RESET_COLOR);
	if (test_format_s() == 1)
		printf(GREEN_COLOR "\n\n<< Format 's' = OKey! ✅ >>\n" RESET_COLOR);
	else
		printf(RED_COLOR "\n\n<< Format 's' = KnOckout! ❌ >>\n" RESET_COLOR);
/*	if (test_format_p() == 1)
		printf(GREEN_COLOR "\n\nFormat 'p' = OKey! :D\n" RESET_COLOR);
	else
		printf(RED_COLOR "\n\nFormat 'p' = KnOckout! :(\n" RESET_COLOR);*/
	if (test_format_d_and_i() == 1)
		printf(GREEN_COLOR "\n\n<< Format 'd' and 'i' = OKey! ✅ >>\n" RESET_COLOR);
	else
		printf(RED_COLOR "\n\n<< Format 'd' and 'i' = KnOckout! ❌ >>\n" RESET_COLOR);
	if (test_format_u() == 1)
		printf(GREEN_COLOR "\n\n<< Format 'u' = OKey! ✅ >>\n" RESET_COLOR);
	else
		printf(RED_COLOR "\n\n<< Format 'u' = KnOckout! ❌ >>\n" RESET_COLOR);
	printf(YELLOW_COLOR "\n\t● 👋 Tester Finished 👋 ●\n" RESET_COLOR "\n");
	return (0);
}
